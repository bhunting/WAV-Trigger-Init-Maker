/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "Trigger.h"
//[/Headers]

#include "MainComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
{
    addAndMakeVisible (groupComponent3 = new GroupComponent ("new group",
                                                             "Init File"));
    groupComponent3->setColour (GroupComponent::textColourId, Colours::white);

    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            "Trigger Settings"));
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0x66000000));
    groupComponent->setColour (GroupComponent::textColourId, Colours::white);

    addAndMakeVisible (quitButton = new TextButton (String::empty));
    quitButton->setButtonText ("Quit");
    quitButton->addListener (this);

    addAndMakeVisible (statusBar = new Label ("new label",
                                              String::empty));
    statusBar->setFont (Font (15.00f, Font::plain));
    statusBar->setJustificationType (Justification::centredLeft);
    statusBar->setEditable (false, false, false);
    statusBar->setColour (Label::backgroundColourId, Colour (0xff8da3da));
    statusBar->setColour (Label::textColourId, Colour (0xffad0101));
    statusBar->setColour (Label::outlineColourId, Colour (0x00000000));
    statusBar->setColour (TextEditor::textColourId, Colours::black);
    statusBar->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (functionBox = new ComboBox ("function box"));
    functionBox->setEditableText (false);
    functionBox->setJustificationType (Justification::centredLeft);
    functionBox->setTextWhenNothingSelected (String::empty);
    functionBox->setTextWhenNoChoicesAvailable ("(no choices)");
    functionBox->addListener (this);

    addAndMakeVisible (typeBox = new ComboBox ("type box"));
    typeBox->setEditableText (false);
    typeBox->setJustificationType (Justification::centredLeft);
    typeBox->setTextWhenNothingSelected (String::empty);
    typeBox->setTextWhenNoChoicesAvailable ("(no choices)");
    typeBox->addListener (this);

    addAndMakeVisible (invertToggle = new ToggleButton ("invert toggle"));
    invertToggle->setButtonText ("Invert");
    invertToggle->addListener (this);

    addAndMakeVisible (polyToggle = new ToggleButton ("poly toggle"));
    polyToggle->setButtonText ("Polyphonic");
    polyToggle->addListener (this);

    addAndMakeVisible (lowText = new TextEditor ("low text"));
    lowText->setMultiLine (false);
    lowText->setReturnKeyStartsNewLine (false);
    lowText->setReadOnly (false);
    lowText->setScrollbarsShown (false);
    lowText->setCaretVisible (true);
    lowText->setPopupMenuEnabled (true);
    lowText->setText (String::empty);

    addAndMakeVisible (highText = new TextEditor ("high text"));
    highText->setMultiLine (false);
    highText->setReturnKeyStartsNewLine (false);
    highText->setReadOnly (false);
    highText->setScrollbarsShown (false);
    highText->setCaretVisible (true);
    highText->setPopupMenuEnabled (true);
    highText->setText (String::empty);

    addAndMakeVisible (newButton = new TextButton ("new button"));
    newButton->setButtonText ("New");
    newButton->addListener (this);

    addAndMakeVisible (saveButton = new TextButton ("save button"));
    saveButton->setButtonText ("Save");
    saveButton->addListener (this);

    addAndMakeVisible (openButton = new TextButton ("open button"));
    openButton->setButtonText ("Open");
    openButton->addListener (this);

    addAndMakeVisible (saveAsButton = new TextButton ("save as button"));
    saveAsButton->setButtonText ("Save As");
    saveAsButton->addListener (this);

    addAndMakeVisible (groupComponent2 = new GroupComponent ("new group",
                                                             "System"));
    groupComponent2->setColour (GroupComponent::textColourId, Colours::white);

    addAndMakeVisible (label2 = new Label ("new label",
                                           "Function"));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           "Type"));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           "Track Range"));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (baudBox = new ComboBox ("baud box"));
    baudBox->setEditableText (false);
    baudBox->setJustificationType (Justification::centredLeft);
    baudBox->setTextWhenNothingSelected (String::empty);
    baudBox->setTextWhenNoChoicesAvailable ("(no choices)");
    baudBox->addListener (this);

    addAndMakeVisible (sampleRateBox = new ComboBox ("sample rate box"));
    sampleRateBox->setEditableText (false);
    sampleRateBox->setJustificationType (Justification::centredLeft);
    sampleRateBox->setTextWhenNothingSelected (String::empty);
    sampleRateBox->setTextWhenNoChoicesAvailable ("(no choices)");
    sampleRateBox->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          "Serial Baudrate"));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label21 = new Label ("new label",
                                            "Audio Sample Rate"));
    label21->setFont (Font (15.00f, Font::plain));
    label21->setJustificationType (Justification::centredLeft);
    label21->setEditable (false, false, false);
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (volSlider = new Slider ("volume slider"));
    volSlider->setRange (-20, 10, 1);
    volSlider->setSliderStyle (Slider::LinearHorizontal);
    volSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    volSlider->addListener (this);

    addAndMakeVisible (label22 = new Label ("new label",
                                            "Initial Volume (dB)"));
    label22->setFont (Font (15.00f, Font::plain));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (linkButton = new HyperlinkButton ("robertsonics.com",
                                                         URL ("http://www.robertsonics.com/makerjam/support/")));
    linkButton->setTooltip ("http://www.robertsonics.com/makerjam/support/");
    linkButton->setButtonText ("robertsonics.com");
    linkButton->setColour (HyperlinkButton::textColourId, Colours::white);

    addAndMakeVisible (initText = new TextEditor ("init text editor"));
    initText->setMultiLine (true);
    initText->setReturnKeyStartsNewLine (true);
    initText->setReadOnly (false);
    initText->setScrollbarsShown (true);
    initText->setCaretVisible (true);
    initText->setPopupMenuEnabled (true);
    initText->setText (String::empty);

    addAndMakeVisible (triggerBox = new ComboBox ("trigger combo box"));
    triggerBox->setEditableText (false);
    triggerBox->setJustificationType (Justification::centredLeft);
    triggerBox->setTextWhenNothingSelected (String::empty);
    triggerBox->setTextWhenNoChoicesAvailable ("(no choices)");
    triggerBox->addListener (this);

    addAndMakeVisible (interfaceBox = new ComboBox ("interface combo box"));
    interfaceBox->setEditableText (false);
    interfaceBox->setJustificationType (Justification::centredLeft);
    interfaceBox->setTextWhenNothingSelected (String::empty);
    interfaceBox->setTextWhenNoChoicesAvailable ("(no choices)");
    interfaceBox->addListener (this);

    addAndMakeVisible (addButton = new TextButton ("add button"));
    addButton->setButtonText ("Add");
    addButton->addListener (this);

    addAndMakeVisible (updateButton = new TextButton ("update button"));
    updateButton->setButtonText ("Update");
    updateButton->addListener (this);

    addAndMakeVisible (deleteButton = new TextButton ("delete button"));
    deleteButton->setButtonText ("Delete");
    deleteButton->addListener (this);

    addAndMakeVisible (label5 = new Label ("new label",
                                           "Trigger"));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           "Hardware Interface"));
    label6->setFont (Font (15.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (retriggerToggle = new ToggleButton ("retrigger toggle button"));
    retriggerToggle->setButtonText ("Re-Triggers");
    retriggerToggle->addListener (this);

    addAndMakeVisible (resetButton = new TextButton ("reset button"));
    resetButton->setButtonText ("Reset");
    resetButton->addListener (this);

    addAndMakeVisible (label7 = new Label ("new label",
                                           "(Active High)"));
    label7->setFont (Font (15.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label8 = new Label ("new label",
                                           "Low"));
    label8->setFont (Font (15.00f, Font::plain));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label9 = new Label ("new label",
                                           "High"));
    label9->setFont (Font (15.00f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (780, 620);


    //[Constructor] You can add your own custom stuff here..

	openButton->setEnabled(false);
	saveButton->setEnabled(false);

	baudBox->addItem("1200 bps", 1);
	baudBox->addItem("2400 bps", 2);
	baudBox->addItem("9600 bps", 3);
	baudBox->addItem("19.2 kbps", 4);
	baudBox->addItem("38.4 kbps", 5);

	sampleRateBox->addItem("11,025 Hz", 1);
	sampleRateBox->addItem("22,050 Hz", 2);
	sampleRateBox->addItem("44,100 Hz", 3);

	char buf[8];
	for (int i = 1; i < 17; i++) {
		_itoa_s(i,buf,8,10);
		triggerBox->addItem(buf, i);
	}

	interfaceBox->addItem("Contact Closure", 1);
	interfaceBox->addItem("3.3V Digital", 2);
	interfaceBox->addItem("5.0V Digital", 3);

	functionBox->addItem("Normal", 1);
	functionBox->addItem("Next", 2);
	functionBox->addItem("Previous", 3);
	functionBox->addItem("Random", 4);
	functionBox->addItem("Stop", 5);
	functionBox->addItem("Volume Up", 6);
	functionBox->addItem("Volume Dn", 7);

	typeBox->addItem("Edge", 1);
	typeBox->addItem("Level", 2);

	lowText->setInputRestrictions(3, "0123456789");
	highText->setInputRestrictions(3, "0123456789");

	Font font;
	font.setTypefaceName(Font::getDefaultMonospacedFontName());
	font.setSizeAndStyle(11.0f, 0, 1.0f, 0.0f);
	initText->setFont(font);

	reset();

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent3 = nullptr;
    groupComponent = nullptr;
    quitButton = nullptr;
    statusBar = nullptr;
    functionBox = nullptr;
    typeBox = nullptr;
    invertToggle = nullptr;
    polyToggle = nullptr;
    lowText = nullptr;
    highText = nullptr;
    newButton = nullptr;
    saveButton = nullptr;
    openButton = nullptr;
    saveAsButton = nullptr;
    groupComponent2 = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    baudBox = nullptr;
    sampleRateBox = nullptr;
    label = nullptr;
    label21 = nullptr;
    volSlider = nullptr;
    label22 = nullptr;
    linkButton = nullptr;
    initText = nullptr;
    triggerBox = nullptr;
    interfaceBox = nullptr;
    addButton = nullptr;
    updateButton = nullptr;
    deleteButton = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    retriggerToggle = nullptr;
    resetButton = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2a4dba));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    groupComponent3->setBounds (217, 224, 528, 352);
    groupComponent->setBounds (217, 8, 528, 208);
    quitButton->setBounds (24, 472, 63, 24);
    statusBar->setBounds (0, getHeight() - 24, proportionOfWidth (1.0000f), 24);
    functionBox->setBounds (595, 59, 112, 24);
    typeBox->setBounds (481, 59, 98, 24);
    invertToggle->setBounds (248, 96, 108, 24);
    polyToggle->setBounds (472, 96, 96, 24);
    lowText->setBounds (596, 125, 39, 24);
    highText->setBounds (666, 125, 39, 24);
    newButton->setBounds (24, 315, 63, 24);
    saveButton->setBounds (24, 395, 63, 24);
    openButton->setBounds (24, 355, 63, 24);
    saveAsButton->setBounds (24, 435, 63, 24);
    groupComponent2->setBounds (16, 8, 184, 272);
    label2->setBounds (589, 36, 63, 24);
    label3->setBounds (476, 35, 47, 24);
    label4->setBounds (590, 97, 87, 24);
    baudBox->setBounds (45, 64, 128, 24);
    sampleRateBox->setBounds (46, 128, 128, 24);
    label->setBounds (39, 34, 112, 24);
    label21->setBounds (42, 99, 128, 24);
    volSlider->setBounds (40, 199, 140, 48);
    label22->setBounds (42, 175, 150, 24);
    linkButton->setBounds (24, 552, 150, 24);
    initText->setBounds (240, 248, 483, 310);
    triggerBox->setBounds (248, 59, 56, 24);
    interfaceBox->setBounds (321, 59, 143, 24);
    addButton->setBounds (328, 160, 63, 24);
    updateButton->setBounds (408, 160, 63, 24);
    deleteButton->setBounds (488, 160, 63, 24);
    label5->setBounds (242, 35, 56, 24);
    label6->setBounds (315, 35, 141, 24);
    retriggerToggle->setBounds (360, 96, 95, 24);
    resetButton->setBounds (248, 160, 63, 24);
    label7->setBounds (263, 112, 96, 24);
    label8->setBounds (592, 148, 40, 24);
    label9->setBounds (662, 148, 40, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == quitButton)
    {
        //[UserButtonCode_quitButton] -- add your button handler code here..

        JUCEApplication::quit();

        //[/UserButtonCode_quitButton]
    }
    else if (buttonThatWasClicked == invertToggle)
    {
        //[UserButtonCode_invertToggle] -- add your button handler code here..
        //[/UserButtonCode_invertToggle]
    }
    else if (buttonThatWasClicked == polyToggle)
    {
        //[UserButtonCode_polyToggle] -- add your button handler code here..
        //[/UserButtonCode_polyToggle]
    }
    else if (buttonThatWasClicked == newButton)
    {
        //[UserButtonCode_newButton] -- add your button handler code here..
		reset();
        //[/UserButtonCode_newButton]
    }
    else if (buttonThatWasClicked == saveButton)
    {
        //[UserButtonCode_saveButton] -- add your button handler code here..
        //[/UserButtonCode_saveButton]
    }
    else if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == saveAsButton)
    {
        //[UserButtonCode_saveAsButton] -- add your button handler code here..

        FileChooser fc ("Choose a file to save...",
				File::getCurrentWorkingDirectory().getChildFile("wavtrigr.ini"),
                "ini",
                nullptr);
        if (fc.browseForFileToSave (true)) {
			File file = fc.getResult();
			save(file);
		}

        //[/UserButtonCode_saveAsButton]
    }
    else if (buttonThatWasClicked == addButton)
    {
        //[UserButtonCode_addButton] -- add your button handler code here..

		//mInitStrings.add(buildTriggerDesc());
		if (insertTriggerString()) {
			updateInitWindow();
			addButton->setEnabled(false);
			updateButton->setEnabled(true);
			deleteButton->setEnabled(true);
		}

        //[/UserButtonCode_addButton]
    }
    else if (buttonThatWasClicked == updateButton)
    {
        //[UserButtonCode_updateButton] -- add your button handler code here..

		int m = findTrigger(triggerBox->getSelectedId());
		if ((m >= 0) && (m < 128)) {
			deleteInitString(m);
		}
		insertTriggerString();
		updateInitWindow();
		addButton->setEnabled(false);
		updateButton->setEnabled(true);
		deleteButton->setEnabled(true);

        //[/UserButtonCode_updateButton]
    }
    else if (buttonThatWasClicked == deleteButton)
    {
        //[UserButtonCode_deleteButton] -- add your button handler code here..

		int m = findTrigger(triggerBox->getSelectedId());
		if ((m >= 0) && (m < 128)) {
			deleteInitString(m);
			addButton->setEnabled(true);
			updateButton->setEnabled(false);
			deleteButton->setEnabled(false);
			updateInitWindow();
		}

        //[/UserButtonCode_deleteButton]
    }
    else if (buttonThatWasClicked == retriggerToggle)
    {
        //[UserButtonCode_retriggerToggle] -- add your button handler code here..
        //[/UserButtonCode_retriggerToggle]
    }
    else if (buttonThatWasClicked == resetButton)
    {
        //[UserButtonCode_resetButton] -- add your button handler code here..

		resetTrigger();

        //[/UserButtonCode_resetButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void MainComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == functionBox)
    {
        //[UserComboBoxCode_functionBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_functionBox]
    }
    else if (comboBoxThatHasChanged == typeBox)
    {
        //[UserComboBoxCode_typeBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_typeBox]
    }
    else if (comboBoxThatHasChanged == baudBox)
    {
        //[UserComboBoxCode_baudBox] -- add your combo box handling code here..

		// Look for and delete any existing BAUD entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#BAUD"))
				mInitStrings.remove(n);
		}
		// Add an entry if not the default
		if (baudBox->getSelectedId() != 4) {
			String bStr = "#BAUD ";
			switch (baudBox->getSelectedId()) {
				case 1:
					bStr += "1200";
				break;
				case 2:
					bStr += "2400";
				break;
				case 3:
					bStr += "9600";
				break;
				case 5:
					bStr += "38400";
				break;
			}
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserComboBoxCode_baudBox]
    }
    else if (comboBoxThatHasChanged == sampleRateBox)
    {
        //[UserComboBoxCode_sampleRateBox] -- add your combo box handling code here..

		// Look for and delete any existing BAUD entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#RATE"))
				mInitStrings.remove(n);
		}
		// Add an entry if not the default
		if (sampleRateBox->getSelectedId() != 3) {
			String bStr = "#RATE ";
			switch (sampleRateBox->getSelectedId()) {
				case 1:
					bStr += "11025";
				break;
				case 2:
					bStr += "22050";
				break;
			}
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserComboBoxCode_sampleRateBox]
    }
    else if (comboBoxThatHasChanged == triggerBox)
    {
        //[UserComboBoxCode_triggerBox] -- add your combo box handling code here..

		int n = findTrigger(triggerBox->getSelectedId());
		if ((n >= 0) && (n < 128))
		{
			parseTriggerDesc(mInitStrings[n]);
			addButton->setEnabled(false);
			updateButton->setEnabled(true);
			deleteButton->setEnabled(true);
		}
		else {
			resetTrigger();
			addButton->setEnabled(true);
			updateButton->setEnabled(false);
			deleteButton->setEnabled(false);
		}

        //[/UserComboBoxCode_triggerBox]
    }
    else if (comboBoxThatHasChanged == interfaceBox)
    {
        //[UserComboBoxCode_interfaceBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_interfaceBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void MainComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == volSlider)
    {
        //[UserSliderCode_volSlider] -- add your slider handling code here..

			int i = (int)volSlider->getValue();

			// Look for and delete any existing BAUD entry
			for (int n = 0; n < mInitStrings.size(); n++) {
				if (mInitStrings[n].startsWith("#VOLM"))
					mInitStrings.remove(n);
			}

			// Add an entry if not the default
			if (i != 0) {
				String bStr = "#VOLM ";
				bStr += i;
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			}
			updateInitWindow();

        //[/UserSliderCode_volSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

// Put most of the custom MainComponent methods in a separate file
#include "MCFunctions.cpp"

void MainComponent::changeListenerCallback(ChangeBroadcaster *)
{

}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330000013" fixedSize="1" initialWidth="780"
                 initialHeight="620">
  <BACKGROUND backgroundColour="ff2a4dba"/>
  <GROUPCOMPONENT name="new group" id="4825f51d5be1772d" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="217 224 528 352" textcol="ffffffff"
                  title="Init File"/>
  <GROUPCOMPONENT name="new group" id="38c25bfaed540c9a" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="217 8 528 208" outlinecol="66000000"
                  textcol="ffffffff" title="Trigger Settings"/>
  <TEXTBUTTON name="" id="bcf4f7b0888effe5" memberName="quitButton" virtualName=""
              explicitFocusOrder="0" pos="24 472 63 24" buttonText="Quit" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="ef8d15cc5a4b63c3" memberName="statusBar"
         virtualName="" explicitFocusOrder="0" pos="0 0Rr 100% 24" bkgCol="ff8da3da"
         textCol="ffad0101" outlineCol="0" edTextCol="ff000000" edBkgCol="0"
         labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="function box" id="8ec5e1a0b6bf5e23" memberName="functionBox"
            virtualName="" explicitFocusOrder="0" pos="595 59 112 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="type box" id="d1fcc0036164e910" memberName="typeBox" virtualName=""
            explicitFocusOrder="0" pos="481 59 98 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TOGGLEBUTTON name="invert toggle" id="a46ca2e5cccc18cc" memberName="invertToggle"
                virtualName="" explicitFocusOrder="0" pos="248 96 108 24" buttonText="Invert"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="poly toggle" id="429d46bb36488187" memberName="polyToggle"
                virtualName="" explicitFocusOrder="0" pos="472 96 96 24" buttonText="Polyphonic"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTEDITOR name="low text" id="34a63e8887bfc5f3" memberName="lowText" virtualName=""
              explicitFocusOrder="0" pos="596 125 39 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="0" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="high text" id="78ea03ee33471435" memberName="highText"
              virtualName="" explicitFocusOrder="0" pos="666 125 39 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="0"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="b85453e71d7e819a" memberName="newButton"
              virtualName="" explicitFocusOrder="0" pos="24 315 63 24" buttonText="New"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="save button" id="7f44c667d204efa4" memberName="saveButton"
              virtualName="" explicitFocusOrder="0" pos="24 395 63 24" buttonText="Save"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="open button" id="aff16e2440c1e77e" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="24 355 63 24" buttonText="Open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="save as button" id="36951dd779d924d0" memberName="saveAsButton"
              virtualName="" explicitFocusOrder="0" pos="24 435 63 24" buttonText="Save As"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <GROUPCOMPONENT name="new group" id="6ec7de23acb7bc6f" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="16 8 184 272" textcol="ffffffff"
                  title="System"/>
  <LABEL name="new label" id="55d41def757f7937" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="589 36 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Function" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ab69c117bbd4949c" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="476 35 47 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Type" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="76f809313cab5795" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="590 97 87 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Track Range" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="baud box" id="34072d5a8cd3a40e" memberName="baudBox" virtualName=""
            explicitFocusOrder="0" pos="45 64 128 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="sample rate box" id="b1bacfa2afd6ee10" memberName="sampleRateBox"
            virtualName="" explicitFocusOrder="0" pos="46 128 128 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="b168245de12e2a99" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="39 34 112 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Serial Baudrate" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="53a98ea4fee8c3f8" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="42 99 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Audio Sample Rate" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="fbfedd66eca0907d" memberName="volSlider"
          virtualName="" explicitFocusOrder="0" pos="40 199 140 48" min="-20"
          max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="8236b56510d8f8c8" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="42 175 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Initial Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <HYPERLINKBUTTON name="link button" id="f202f29b31c62ae" memberName="linkButton"
                   virtualName="" explicitFocusOrder="0" pos="24 552 150 24" tooltip="http://www.robertsonics.com/makerjam/support/"
                   textCol="ffffffff" buttonText="robertsonics.com" connectedEdges="0"
                   needsCallback="0" radioGroupId="0" url="http://www.robertsonics.com/makerjam/support/"/>
  <TEXTEDITOR name="init text editor" id="affceb0f94323c59" memberName="initText"
              virtualName="" explicitFocusOrder="0" pos="240 248 483 310" initialText=""
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <COMBOBOX name="trigger combo box" id="254229b66c221ce9" memberName="triggerBox"
            virtualName="" explicitFocusOrder="0" pos="248 59 56 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="interface combo box" id="7acafe3ed6d58318" memberName="interfaceBox"
            virtualName="" explicitFocusOrder="0" pos="321 59 143 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="add button" id="82c93bdd5a7a904" memberName="addButton"
              virtualName="" explicitFocusOrder="0" pos="328 160 63 24" buttonText="Add"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="update button" id="1bccddea64d1188d" memberName="updateButton"
              virtualName="" explicitFocusOrder="0" pos="408 160 63 24" buttonText="Update"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="delete button" id="59540029ea4972fb" memberName="deleteButton"
              virtualName="" explicitFocusOrder="0" pos="488 160 63 24" buttonText="Delete"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="fa287ff2e92f4a56" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="242 35 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Trigger" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ce0bd5e83327f19a" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="315 35 141 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Hardware Interface" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="retrigger toggle button" id="f81a36913a0b030d" memberName="retriggerToggle"
                virtualName="" explicitFocusOrder="0" pos="360 96 95 24" buttonText="Re-Triggers"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="reset button" id="4dc7d5288c0df2c4" memberName="resetButton"
              virtualName="" explicitFocusOrder="0" pos="248 160 63 24" buttonText="Reset"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="b6406b79fec0442a" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="263 112 96 24" edTextCol="ff000000"
         edBkgCol="0" labelText="(Active High)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fd492b223f17bf03" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="592 148 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Low" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="72cd6762c5446d8e" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="662 148 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="High" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
