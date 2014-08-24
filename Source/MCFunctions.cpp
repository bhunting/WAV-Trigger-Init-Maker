// **************************************************************************
//     Filename: MCFunctions.CPP
// Date Created: 9/21/2013
//      Version: 0.01
//
//
//  COPYRIGHT (c) Robertsonics 2013. All Rights Reserved
//
// **************************************************************************
//
// Revision History
//
// Date/Rev  Description
// --------  -----------
//
// V0.01     First version created.
// 9/21/13


// **************************************************************************
// resetTrigger(): Restore the Trigger settings to default
void MainComponent::resetTrigger(void)
{
	interfaceBox->setSelectedId(1, dontSendNotification);
	functionBox->setSelectedId(1, dontSendNotification);
	typeBox->setSelectedId(1, dontSendNotification);
	typeBox->setEnabled(true);
	invertToggle->setToggleState(false, dontSendNotification);
	retriggerToggle->setToggleState(true, dontSendNotification);
	retriggerToggle->setEnabled(true);
	polyToggle->setToggleState(true, dontSendNotification);
	polyToggle->setEnabled(true);
	trigVolSlider->setValue(0.0, dontSendNotification);
	trigVolSlider->setEnabled(true);
	lowText->setText("", dontSendNotification);
	lowText->setEnabled(false);
	highText->setText("", dontSendNotification);
	highText->setEnabled(false);
}

// **************************************************************************
// reset(): Reset everything to default, clear the edit window.
void MainComponent::reset(void)
{
	baudBox->setSelectedId(6, dontSendNotification);
	volSlider->setValue(0.0, dontSendNotification);
	ampToggle->setToggleState(false, dontSendNotification);
	triggerBox->setSelectedId(1, dontSendNotification);
	resetTrigger();

	addButton->setEnabled(true);
	updateButton->setEnabled(false);
	deleteButton->setEnabled(false);
	copyButton->setEnabled(false);
	testButton->setEnabled(false);

	releaseSlider->setEnabled(false);
	releaseSlider->setValue(0.0, dontSendNotification);
	velocityToggle->setEnabled(false);
	velocityToggle->setToggleState(false, dontSendNotification);
	releaseText->setEnabled(false);

	lpToggle->setToggleState(false, dontSendNotification);
	sleepText->setEnabled(false);
	sleepBox->setEnabled(false);
	sleepBox->setSelectedId(7, dontSendNotification);

	mInitStrings.clear();
	mInitStrings.add("********************************************************************");
	mInitStrings.add(newLine);
	mInitStrings.add("This file was generated by the WAV Trigger Init File Maker v1.04");
	mInitStrings.add(newLine);
	mInitStrings.add("It is only required if you wish to over-ride default settings. You");
	mInitStrings.add(newLine);
	mInitStrings.add("may add your own comments below this line -->");
	updateInitWindow();
}

// **************************************************************************
// buildTriggerDesc(): Create a #TRIG NN line according to the current
//  settings
String MainComponent::buildTriggerDesc(void)
{

String tStr;
String subStr;
int i, j;

	// Trigger command and trigger number
	tStr = "#TRIG ";
	if (triggerBox->getSelectedId() < 10)
		tStr += 0;
	tStr += triggerBox->getSelectedId();
	tStr += ", ";

	// Hardware interface
	tStr += interfaceBox->getSelectedId();
	tStr += ", ";

	// Invert Flag
	tStr += invertToggle->getToggleState();
	tStr += ", ";

	// Type
	tStr += typeBox->getSelectedId();
	tStr += ", ";

	// Retrigger Flag
	tStr += retriggerToggle->getToggleState();
	tStr += ", ";

	// Polyphonic Flag
	tStr += polyToggle->getToggleState();
	tStr += ", ";

	// Function
	tStr += functionBox->getSelectedId();
	tStr += ", ";

	// Trigger volume
	i = trigVolSlider->getValue();
	tStr += i;
	tStr += ", ";

	if ((functionBox->getSelectedId() > 1) && (functionBox->getSelectedId() < 8)) {

		// Low range
		subStr = lowText->getText();
		i = subStr.getIntValue();
		if ((i > 0) && (i < 1000)) {
			tStr += i;
			tStr += ", ";
		}
		else
			tStr = "";

		// High range
		subStr = highText->getText();
		j = subStr.getIntValue();
		if ((i > 0) && (i < 1000) && (j >= i)) {
			tStr += j;
		}
		else
			tStr = "";

		if (tStr.length() == 0) {
			AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon, "Track Range Error",
				"Track Range values for this Trigger Function type must be set to 1 - 999, with HIGH >= LOW");
			return tStr;
		}
	}
	else {
		lowText->setText("");
		highText->setText("");
		tStr += ",";
	}

	tStr += newLine;
	return tStr;
}

// **************************************************************************
// getTrigger(): Look for a trigger number in this string
int MainComponent::getTriggerNum(String tStr)
{

int t;
String subStr;

	if (!tStr.startsWith("#TRIG "))
		return -1;

	subStr = tStr.trimCharactersAtStart("#TRIG ");
	subStr = subStr.upToFirstOccurrenceOf(",", false, false);
	t = subStr.getIntValue();
	if ((t >= 1 || t <= 16))
		return t;

	return -1;
}


// **************************************************************************
// findTrigger(): Look for a trigger entry in the string array
int MainComponent::findTrigger(int t)
{
	for (int i = 0; i < mInitStrings.size(); i++) {
		if (getTriggerNum(mInitStrings[i]) == t)
			return i;
	}
	return -1;
}


// **************************************************************************
// insertTriggerString(): insert an entry for the current trigger settings
//  into the correct element in the init string array.
bool MainComponent::insertTriggerString(void)
{

int n = 0;
bool found = false;
String trigDesc;

	trigDesc = buildTriggerDesc();
	if (trigDesc.length() == 0)
		return false;

	while ((n < mInitStrings.size()) && !found) {
		if (getTriggerNum(mInitStrings[n]) > triggerBox->getSelectedId())
			found = true;
		else if (mInitStrings[n].contains("*"))
			found = true;
		else
			n++;
	}

	if (found)
		mInitStrings.insert(n, trigDesc);
	else
		mInitStrings.add(buildTriggerDesc());

	return true;
		
}



// **************************************************************************
// parseTriggerDesc(): Parse the string and update the settings accordingly
bool MainComponent::parseTriggerDesc(String tStr)
{

int t, n, i;
String subStr;
StringArray tokens;

	if (!tStr.startsWith("#TRIG "))
		return false;

	// Parse the paramaters into a token string array
	subStr = tStr.trimCharactersAtStart("#TRIG ");
	tokens.addTokens(subStr, false);
	n = tokens.size();
	if (n == 0)
		return false;

	t = tokens[0].getIntValue();
	if ((t < 0) || (t > 16))
		return false;
	triggerBox->setSelectedId(t, dontSendNotification);
	resetTrigger();

	// Read and set the hardware interface type
	if (n > 1) {
		i = tokens[1].getIntValue();
		if ((i > 0) && (i <= interfaceBox->getNumItems()))
			interfaceBox->setSelectedId(i, dontSendNotification);
	}

	// Read and set the invert toggle
	if (n > 2) {
		i = tokens[2].getIntValue();
		if (i == 0)
			invertToggle->setToggleState(false, dontSendNotification);
		else
			invertToggle->setToggleState(true, dontSendNotification);
	}

	// Read and set the trigger type
	if (n > 3) {
		i = tokens[3].getIntValue();
		if ((i > 0) && (i <= typeBox->getNumItems()))
			typeBox->setSelectedId(i, dontSendNotification);
	}

	// Read and set the retrigger toggle
	if (n > 4) {
		i = tokens[4].getIntValue();
		if (i == 0)
			retriggerToggle->setToggleState(false, dontSendNotification);
		else
			retriggerToggle->setToggleState(true, dontSendNotification);
	}

	// Read and set the polyphonic toggle
	if (n > 5) {
		i = tokens[5].getIntValue();
		if (i == 0)
			polyToggle->setToggleState(false, dontSendNotification);
		else
			polyToggle->setToggleState(true, dontSendNotification);
	}

	// Read and set the trigger function
	if (n > 6) {
		i = tokens[6].getIntValue();
		if ((i > 0) && (i <= functionBox->getNumItems()))
			functionBox->setSelectedId(i, dontSendNotification);
	}

	// Read and set the trigger volume
	if (n > 7) {
		i = tokens[7].getIntValue();
		if ((i >= -20) && (i <= 10))
			trigVolSlider->setValue(i);
	}

	// Read and fill in the track range
	if (n > 8) {
		i = tokens[8].getIntValue();
		if ((i > 0) && (i < 1000)) {
			subStr = "";
			subStr += i;
			lowText->setText(subStr);
		}
		else
			lowText->setText("");
	}
	if (n > 9) {
		i = tokens[9].getIntValue();
		if ((i > 0) && (i < 1000)) {
			subStr = "";
			subStr += i;
			highText->setText(subStr);
		}
		else
			highText->setText("");
	}

	// Enable/Disable controls according to these settings:

	t = typeBox->getSelectedId();
	i = functionBox->getSelectedId();

	if ((t == 2) || (i > 4))
		retriggerToggle->setEnabled(false);
	else
		retriggerToggle->setEnabled(true);

	if (i < 5)
		polyToggle->setEnabled(true);
	else
		polyToggle->setEnabled(false);

	if ((i == 0) || (i > 7)) {
		lowText->setEnabled(false);
		highText->setEnabled(false);
	}
	else {
		lowText->setEnabled(true);
		highText->setEnabled(true);
	}

	if (i < 4)
		trigVolSlider->setEnabled(true);
	else
		trigVolSlider->setEnabled(false);

	return true;

}

// **************************************************************************
// deleteInitString(): Look for a trigger entry in the string array
void MainComponent::deleteInitString(int n)
{
	if (n >= mInitStrings.size())
		return;
	mInitStrings.remove(n);

}



void MainComponent::updateInitWindow(void)
{

int i;
String initStr;

	initText->clear();
	for (i = 0; i < mInitStrings.size(); i++) {
		initStr.append(mInitStrings[i], 1024);
	}
	initText->setText(initStr);

}

void MainComponent::save(File saveFile)
{

String line;

	if (saveFile.exists())
		saveFile.deleteFile();
	if (saveFile.create()) {
		FileOutputStream * outStream = saveFile.createOutputStream();
		outStream->writeText(initText->getText(), 0, 0);
		outStream->writeText(newLine, 0, 0);
		delete outStream;
	}
}


// **************************************************************************
// testTrigger(): Send the current settings to the Communicator
bool MainComponent::testTrigger(void)
{

int trigNum;
String s;

	trigNum = triggerBox->getSelectedId() - 1;
	TRIGGER_SETTINGS ts;
	ts.hardware = interfaceBox->getSelectedId();
	ts.invert = invertToggle->getToggleState();
	ts.type = typeBox->getSelectedId();
	ts.retrigger = retriggerToggle->getToggleState();
	ts.polyphonic = polyToggle->getToggleState();
	ts.function = functionBox->getSelectedId();
	ts.volume = trigVolSlider->getValue();
	s = lowText->getText();
	ts.first = s.getIntValue();
	s = highText->getText();
	ts.last = s.getIntValue();
	pCom->setTrigger(&ts, trigNum);
	return true;
}

