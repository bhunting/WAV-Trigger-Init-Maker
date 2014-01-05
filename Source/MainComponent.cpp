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
#include "Serial.h"
#include "Communicator.h"
#include "Commands.h"
//[/Headers]

#include "MainComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
{
    addAndMakeVisible (groupComponent3 = new GroupComponent ("new group",
                                                             "Trigger Test COM Port (optional)"));
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
    statusBar->setColour (Label::textColourId, Colours::black);
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
                                          "Serial Comm."));
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
    volSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    volSlider->addListener (this);

    addAndMakeVisible (label22 = new Label ("new label",
                                            "Output Volume (dB)"));
    label22->setFont (Font (15.00f, Font::plain));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (linkButton = new HyperlinkButton ("Help",
                                                         URL ("http://robertsonics.com/wav-trigger-online-user-guide/")));
    linkButton->setTooltip ("http://robertsonics.com/wav-trigger-online-user-guide/");
    linkButton->setButtonText ("Help");
    linkButton->addListener (this);
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

    addAndMakeVisible (ampToggle = new ToggleButton ("amp toggle button"));
    ampToggle->setButtonText ("Audio Amp Power");
    ampToggle->addListener (this);

    addAndMakeVisible (label10 = new Label ("new label",
                                            "Init File Contents:"));
    label10->setFont (Font (15.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::textColourId, Colour (0xfffffdfd));
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (testButton = new TextButton ("delete button"));
    testButton->setButtonText ("Test");
    testButton->addListener (this);
    testButton->setColour (TextButton::buttonColourId, Colour (0xffd00009));

    addAndMakeVisible (portBox = new ComboBox ("new combo box"));
    portBox->setEditableText (false);
    portBox->setJustificationType (Justification::centredLeft);
    portBox->setTextWhenNothingSelected (String::empty);
    portBox->setTextWhenNoChoicesAvailable ("(no choices)");
    portBox->addListener (this);

    addAndMakeVisible (label11 = new Label ("new label",
                                            "Port:"));
    label11->setFont (Font (15.00f, Font::plain));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (testBaudBox = new ComboBox ("new combo box"));
    testBaudBox->setEditableText (false);
    testBaudBox->setJustificationType (Justification::centredLeft);
    testBaudBox->setTextWhenNothingSelected (String::empty);
    testBaudBox->setTextWhenNoChoicesAvailable ("(no choices)");
    testBaudBox->addListener (this);

    addAndMakeVisible (label12 = new Label ("new label",
                                            "Baudrate:"));
    label12->setFont (Font (15.00f, Font::plain));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (trigVolSlider = new Slider ("trig volume slider"));
    trigVolSlider->setRange (-20, 10, 1);
    trigVolSlider->setSliderStyle (Slider::LinearHorizontal);
    trigVolSlider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    trigVolSlider->addListener (this);

    addAndMakeVisible (label7 = new Label ("new label",
                                           "Trigger Volume (dB)"));
    label7->setFont (Font (15.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (stopButton = new TextButton ("stop button"));
    stopButton->setButtonText ("StopAll");
    stopButton->addListener (this);

    addAndMakeVisible (copyButton = new TextButton ("copy button"));
    copyButton->setButtonText ("Copy");
    copyButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 620);


    //[Constructor] You can add your own custom stuff here..

	openButton->setEnabled(false);
	saveButton->setEnabled(false);
	testButton->setEnabled(false);

	testBaudBox->addItem("1200 bps", 1);
	testBaudBox->addItem("2400 bps", 2);
	testBaudBox->addItem("9600 bps", 3);
	testBaudBox->addItem("19.2 kbps", 4);
	testBaudBox->addItem("38.4 kbps", 5);
	testBaudBox->addItem("57.6 kbps", 6);
	testBaudBox->setSelectedId(6);

	// For now, disable baudrate selection
	testBaudBox->setEnabled(false);

	baudBox->addItem("1200 bps", 1);
	baudBox->addItem("2400 bps", 2);
	baudBox->addItem("9600 bps", 3);
	baudBox->addItem("19.2 kbps", 4);
	baudBox->addItem("38.4 kbps", 5);
	baudBox->addItem("57.6 kbps", 6);
	baudBox->addItem("MIDI", 7);

	sampleRateBox->addItem("11,025 Hz", 1);
	sampleRateBox->addItem("22,050 Hz", 2);
	sampleRateBox->addItem("44,100 Hz", 3);
	sampleRateBox->setEnabled(false);

	char buf[8];
	for (int i = 1; i < 17; i++) {
		_itoa_s(i,buf,8,10);
		triggerBox->addItem(buf, i);
	}

	interfaceBox->addItem("Contact Closure", 1);
	interfaceBox->addItem("Active (3.3V / 5V)", 2);

	functionBox->addItem("Normal", 1);
	functionBox->addItem("Next", 2);
	functionBox->addItem("Previous", 3);
	functionBox->addItem("Random", 4);
	functionBox->addItem("Pause", 5);
	functionBox->addItem("Resume", 6);
	functionBox->addItem("Stop", 7);
	functionBox->addItem("Volume Up", 8);
	functionBox->addItem("Volume Dn", 9);

	typeBox->addItem("Edge", 1);
	typeBox->addItem("Level", 2);

	lowText->setInputRestrictions(3, "0123456789");
	highText->setInputRestrictions(3, "0123456789");

	Font font;
	font.setTypefaceName(Font::getDefaultMonospacedFontName());
	font.setSizeAndStyle(11.0f, 0, 1.0f, 0.0f);
	initText->setFont(font);

	reset();

	pCom = new Communicator();
	pCom->addChangeListener(this);

    StringPairArray portlist = SerialPort::getSerialPortPaths();
	int j = 0;
	if(portlist.size()) {
		for (int i = 0; i < portlist.size(); i++) {

#ifdef WIN32
			if (portlist.getAllKeys()[i].contains("COM")) {
				j++;
				portBox->addItem(portlist.getAllKeys()[i], j);
            }
#else
            if (portlist.getAllKeys()[i].contains("usbserial")) {
				j++;
				portBox->addItem(portlist.getAllValues()[i], j);
			}
#endif
		}
	}

	if (j > 0) {

		// Use the first port to create a Communicator
		// SerialPort * pSP = new SerialPort(portlist.getAllValues()[0], SerialPortConfig(9600, 8, SerialPortConfig::SERIALPORT_PARITY_NONE, SerialPortConfig::STOPBITS_1, SerialPortConfig::FLOWCONTROL_NONE));
		m_portBoxItem = 1;
		portBox->setSelectedId(m_portBoxItem);
		String pN = portBox->getText();
		if (pCom->openPort(pN)) {
			statusBar->setText("  >COM port opened successfully", dontSendNotification);
			m_portOpenFlag = true;
			stopButton->setEnabled(true);
		}
		else {
			statusBar->setText("  >COM port could not be opened!", dontSendNotification);
			m_portOpenFlag = false;
			stopButton->setEnabled(false);
		}
	}
	else {
		portBox->addItem("No USB Serial Devices!", 1);
		m_portBoxItem = 1;
		portBox->setSelectedId(m_portBoxItem);
		statusBar->setText("  >No compatible COM ports found", dontSendNotification);
		m_portOpenFlag = false;
		stopButton->setEnabled(false);
	}

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
	if (pCom != nullptr) {
		pCom->closePort();
		pCom->removeChangeListener(this);
		delete pCom;
	}
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
    label8 = nullptr;
    label9 = nullptr;
    ampToggle = nullptr;
    label10 = nullptr;
    testButton = nullptr;
    portBox = nullptr;
    label11 = nullptr;
    testBaudBox = nullptr;
    label12 = nullptr;
    trigVolSlider = nullptr;
    label7 = nullptr;
    stopButton = nullptr;
    copyButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2e4dab));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    groupComponent3->setBounds (243, 260, 526, 76);
    groupComponent->setBounds (244, 16, 526, 234);
    quitButton->setBounds (32, 515, 63, 24);
    statusBar->setBounds (0, getHeight() - 24, proportionOfWidth (1.0000f), 24);
    functionBox->setBounds (624, 62, 112, 24);
    typeBox->setBounds (510, 62, 98, 24);
    invertToggle->setBounds (273, 105, 108, 24);
    polyToggle->setBounds (504, 105, 96, 24);
    lowText->setBounds (624, 113, 39, 24);
    highText->setBounds (696, 113, 39, 24);
    newButton->setBounds (32, 355, 63, 24);
    saveButton->setBounds (32, 435, 63, 24);
    openButton->setBounds (32, 395, 63, 24);
    saveAsButton->setBounds (32, 475, 63, 24);
    groupComponent2->setBounds (32, 16, 184, 294);
    label2->setBounds (618, 39, 63, 24);
    label3->setBounds (505, 38, 47, 24);
    label4->setBounds (619, 89, 87, 24);
    baudBox->setBounds (62, 62, 128, 24);
    sampleRateBox->setBounds (62, 126, 128, 24);
    label->setBounds (57, 37, 105, 24);
    label21->setBounds (58, 101, 128, 24);
    volSlider->setBounds (56, 191, 140, 48);
    label22->setBounds (58, 167, 150, 24);
    linkButton->setBounds (16, 555, 96, 24);
    initText->setBounds (248, 361, 520, 215);
    triggerBox->setBounds (277, 62, 56, 24);
    interfaceBox->setBounds (350, 62, 143, 24);
    addButton->setBounds (356, 206, 63, 24);
    updateButton->setBounds (436, 206, 63, 24);
    deleteButton->setBounds (516, 206, 63, 24);
    label5->setBounds (271, 38, 56, 24);
    label6->setBounds (344, 38, 141, 24);
    retriggerToggle->setBounds (392, 105, 95, 24);
    resetButton->setBounds (276, 206, 63, 24);
    label8->setBounds (619, 135, 40, 24);
    label9->setBounds (691, 136, 40, 24);
    ampToggle->setBounds (59, 270, 136, 24);
    label10->setBounds (243, 338, 125, 24);
    testButton->setBounds (676, 206, 63, 24);
    portBox->setBounds (323, 292, 208, 24);
    label11->setBounds (275, 292, 48, 24);
    testBaudBox->setBounds (632, 292, 104, 24);
    label12->setBounds (559, 293, 72, 24);
    trigVolSlider->setBounds (408, 147, 150, 24);
    label7->setBounds (274, 146, 150, 24);
    stopButton->setBounds (150, 356, 63, 24);
    copyButton->setBounds (596, 206, 63, 24);
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
                "*.ini",
                true);
        if (fc.browseForFileToSave (true)) {
			File file = fc.getResult();
			save(file);
		}

        //[/UserButtonCode_saveAsButton]
    }
    else if (buttonThatWasClicked == linkButton)
    {
        //[UserButtonCode_linkButton] -- add your button handler code here..
        //[/UserButtonCode_linkButton]
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
			copyButton->setEnabled(true);
			if (m_portOpenFlag)
				testButton->setEnabled(true);
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
		copyButton->setEnabled(true);
		if (m_portOpenFlag)
			testButton->setEnabled(true);

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
			copyButton->setEnabled(false);
			testButton->setEnabled(false);
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
    else if (buttonThatWasClicked == ampToggle)
    {
        //[UserButtonCode_ampToggle] -- add your button handler code here..

		// Look for and delete any existing SPKR entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#SPKR"))
				mInitStrings.remove(n);
		}
		// Add an entry to enable if toggle state is true
		if (ampToggle->getToggleState()) {
			String bStr = "#SPKR 1";
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserButtonCode_ampToggle]
    }
    else if (buttonThatWasClicked == testButton)
    {
        //[UserButtonCode_testButton] -- add your button handler code here..

		testTrigger();

        //[/UserButtonCode_testButton]
    }
    else if (buttonThatWasClicked == stopButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..

		pCom->stopAll();

        //[/UserButtonCode_stopButton]
    }
    else if (buttonThatWasClicked == copyButton)
    {
        //[UserButtonCode_copyButton] -- add your button handler code here..
 
		int ct = triggerBox->getSelectedId();
		if (ct < 16) {
			ct++;
			triggerBox->setSelectedId(ct, dontSendNotification);
			if (ct == 16)
				copyButton->setEnabled(false);

			int m = findTrigger(triggerBox->getSelectedId());
			if ((m >= 0) && (m < 128)) {
				deleteInitString(m);
			}
			if (insertTriggerString()) {
				updateInitWindow();
				addButton->setEnabled(false);
				updateButton->setEnabled(true);
				deleteButton->setEnabled(true);
				copyButton->setEnabled(true);
				if (m_portOpenFlag)
					testButton->setEnabled(true);
			}
		}
		else
			copyButton->setEnabled(false);
		
		//[/UserButtonCode_copyButton]
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

		int f = functionBox->getSelectedId();
		switch (f) {
			case 1: // Normal
				lowText->setText("", dontSendNotification);
				lowText->setEnabled(false);
				highText->setText("", dontSendNotification);
				highText->setEnabled(false);
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(true, dontSendNotification);
				polyToggle->setEnabled(true);
				polyToggle->setToggleState(true, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(true);
			break;
			case 2: // Next
			case 3: // Previous
			case 4: // Random
				lowText->setText("1", dontSendNotification);
				lowText->setEnabled(true);
				highText->setText("16", dontSendNotification);
				highText->setEnabled(true);
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(true, dontSendNotification);
				polyToggle->setEnabled(true);
				polyToggle->setToggleState(true, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(true);
			break;
			case 5:	// Pause
			case 6: // Resume
				lowText->setText("1", dontSendNotification);
				lowText->setEnabled(true);
				highText->setText("16", dontSendNotification);
				highText->setEnabled(true);
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				polyToggle->setEnabled(false);
				polyToggle->setToggleState(false, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(false);
			break;
			case 7:	// Stop
				lowText->setText("1", dontSendNotification);
				lowText->setEnabled(true);
				highText->setText("16", dontSendNotification);
				highText->setEnabled(true);
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				polyToggle->setEnabled(false);
				polyToggle->setToggleState(false, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(false);
			break;
			case 8:	// Volume Up
			case 9: // Volume Down
				lowText->setText("", dontSendNotification);
				lowText->setEnabled(false);
				highText->setText("", dontSendNotification);
				highText->setEnabled(false);
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				polyToggle->setEnabled(false);
				polyToggle->setToggleState(false, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(false);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(false);
			break;
			default:
			break;
		}
        //[/UserComboBoxCode_functionBox]
    }
    else if (comboBoxThatHasChanged == typeBox)
    {
        //[UserComboBoxCode_typeBox] -- add your combo box handling code here..

 		int t = typeBox->getSelectedId();
		switch (t) {
			case 1: // Edge
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(true, dontSendNotification);
			break;
			default: // Level
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
			break;
		}

        //[/UserComboBoxCode_typeBox]
    }
    else if (comboBoxThatHasChanged == baudBox)
    {
        //[UserComboBoxCode_baudBox] -- add your combo box handling code here..

		// Look for and delete any existing BAUD entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#BAUD"))
				mInitStrings.remove(n);
			if (mInitStrings[n].startsWith("#MIDI"))
				mInitStrings.remove(n);
		}
		// Add an entry if not the default
		if (baudBox->getSelectedId() < 6) {
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
				case 4:
					bStr += "19200";
				break;
				case 5:
					bStr += "38400";
				break;
			}
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		else if (baudBox->getSelectedId() == 7) {
			String bStr = "#MIDI 1 ";
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
			copyButton->setEnabled(true);
			if (m_portOpenFlag)
				testButton->setEnabled(true);
		}
		else {
			resetTrigger();
			addButton->setEnabled(true);
			updateButton->setEnabled(false);
			deleteButton->setEnabled(false);
			copyButton->setEnabled(false);
			testButton->setEnabled(false);
		}

        //[/UserComboBoxCode_triggerBox]
    }
    else if (comboBoxThatHasChanged == interfaceBox)
    {
        //[UserComboBoxCode_interfaceBox] -- add your combo box handling code here..

		int i = interfaceBox->getSelectedId();
		switch (i) {
			case 1:	// Contact Closure
				invertToggle->setToggleState(false, dontSendNotification);
			break;
			default: // Active
				invertToggle->setToggleState(true, dontSendNotification);
			break;
		}

        //[/UserComboBoxCode_interfaceBox]
    }
    else if (comboBoxThatHasChanged == portBox)
    {
        //[UserComboBoxCode_portBox] -- add your combo box handling code here..

		if (portBox->getSelectedId() != m_portBoxItem) {
			m_portBoxItem = portBox->getSelectedId();
			String pN = portBox->getText();
			if (pCom->isPortOpen())
				pCom->closePort();
			if (pCom->openPort(pN)) {
				statusBar->setText("  >COM port opened successfully", dontSendNotification);
				m_portOpenFlag = true;
				stopButton->setEnabled(true);
			}
			else {
				statusBar->setText("  >COM port could not be opened!", dontSendNotification);
				m_portOpenFlag = false;
				testButton->setEnabled(false);
				stopButton->setEnabled(false);
			}
		}

        //[/UserComboBoxCode_portBox]
    }
    else if (comboBoxThatHasChanged == testBaudBox)
    {
        //[UserComboBoxCode_testBaudBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_testBaudBox]
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
    else if (sliderThatWasMoved == trigVolSlider)
    {
        //[UserSliderCode_trigVolSlider] -- add your slider handling code here..
        //[/UserSliderCode_trigVolSlider]
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
                 overlayOpacity="0.330" fixedSize="1" initialWidth="800" initialHeight="620">
  <BACKGROUND backgroundColour="ff2e4dab"/>
  <GROUPCOMPONENT name="new group" id="242a01730ad6db8e" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="243 260 526 76" textcol="ffffffff"
                  title="Trigger Test COM Port (optional)"/>
  <GROUPCOMPONENT name="new group" id="38c25bfaed540c9a" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="244 16 526 234" outlinecol="66000000"
                  textcol="ffffffff" title="Trigger Settings"/>
  <TEXTBUTTON name="" id="bcf4f7b0888effe5" memberName="quitButton" virtualName=""
              explicitFocusOrder="0" pos="32 515 63 24" buttonText="Quit" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="ef8d15cc5a4b63c3" memberName="statusBar"
         virtualName="" explicitFocusOrder="0" pos="0 0Rr 100% 24" bkgCol="ff8da3da"
         textCol="ff000000" outlineCol="0" edTextCol="ff000000" edBkgCol="0"
         labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="function box" id="8ec5e1a0b6bf5e23" memberName="functionBox"
            virtualName="" explicitFocusOrder="0" pos="624 62 112 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="type box" id="d1fcc0036164e910" memberName="typeBox" virtualName=""
            explicitFocusOrder="0" pos="510 62 98 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TOGGLEBUTTON name="invert toggle" id="a46ca2e5cccc18cc" memberName="invertToggle"
                virtualName="" explicitFocusOrder="0" pos="273 105 108 24" buttonText="Invert"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="poly toggle" id="429d46bb36488187" memberName="polyToggle"
                virtualName="" explicitFocusOrder="0" pos="504 105 96 24" buttonText="Polyphonic"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTEDITOR name="low text" id="34a63e8887bfc5f3" memberName="lowText" virtualName=""
              explicitFocusOrder="0" pos="624 113 39 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="0" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="high text" id="78ea03ee33471435" memberName="highText"
              virtualName="" explicitFocusOrder="0" pos="696 113 39 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="0"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="b85453e71d7e819a" memberName="newButton"
              virtualName="" explicitFocusOrder="0" pos="32 355 63 24" buttonText="New"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="save button" id="7f44c667d204efa4" memberName="saveButton"
              virtualName="" explicitFocusOrder="0" pos="32 435 63 24" buttonText="Save"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="open button" id="aff16e2440c1e77e" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="32 395 63 24" buttonText="Open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="save as button" id="36951dd779d924d0" memberName="saveAsButton"
              virtualName="" explicitFocusOrder="0" pos="32 475 63 24" buttonText="Save As"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <GROUPCOMPONENT name="new group" id="6ec7de23acb7bc6f" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="32 16 184 294" textcol="ffffffff"
                  title="System"/>
  <LABEL name="new label" id="55d41def757f7937" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="618 39 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Function" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ab69c117bbd4949c" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="505 38 47 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Type" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="76f809313cab5795" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="619 89 87 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Track Range" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="baud box" id="34072d5a8cd3a40e" memberName="baudBox" virtualName=""
            explicitFocusOrder="0" pos="62 62 128 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="sample rate box" id="b1bacfa2afd6ee10" memberName="sampleRateBox"
            virtualName="" explicitFocusOrder="0" pos="62 126 128 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="b168245de12e2a99" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="57 37 105 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Serial Comm." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="53a98ea4fee8c3f8" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="58 101 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Audio Sample Rate" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="fbfedd66eca0907d" memberName="volSlider"
          virtualName="" explicitFocusOrder="0" pos="56 191 140 48" min="-20"
          max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="8236b56510d8f8c8" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="58 167 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <HYPERLINKBUTTON name="link button" id="f202f29b31c62ae" memberName="linkButton"
                   virtualName="" explicitFocusOrder="0" pos="16 555 96 24" tooltip="http://robertsonics.com/wav-trigger-online-user-guide/"
                   textCol="ffffffff" buttonText="Help" connectedEdges="0" needsCallback="1"
                   radioGroupId="0" url="http://robertsonics.com/wav-trigger-online-user-guide/"/>
  <TEXTEDITOR name="init text editor" id="affceb0f94323c59" memberName="initText"
              virtualName="" explicitFocusOrder="0" pos="248 361 520 215" initialText=""
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <COMBOBOX name="trigger combo box" id="254229b66c221ce9" memberName="triggerBox"
            virtualName="" explicitFocusOrder="0" pos="277 62 56 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="interface combo box" id="7acafe3ed6d58318" memberName="interfaceBox"
            virtualName="" explicitFocusOrder="0" pos="350 62 143 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="add button" id="82c93bdd5a7a904" memberName="addButton"
              virtualName="" explicitFocusOrder="0" pos="356 206 63 24" buttonText="Add"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="update button" id="1bccddea64d1188d" memberName="updateButton"
              virtualName="" explicitFocusOrder="0" pos="436 206 63 24" buttonText="Update"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="delete button" id="59540029ea4972fb" memberName="deleteButton"
              virtualName="" explicitFocusOrder="0" pos="516 206 63 24" buttonText="Delete"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="fa287ff2e92f4a56" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="271 38 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Trigger" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ce0bd5e83327f19a" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="344 38 141 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Hardware Interface" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="retrigger toggle button" id="f81a36913a0b030d" memberName="retriggerToggle"
                virtualName="" explicitFocusOrder="0" pos="392 105 95 24" buttonText="Re-Triggers"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="reset button" id="4dc7d5288c0df2c4" memberName="resetButton"
              virtualName="" explicitFocusOrder="0" pos="276 206 63 24" buttonText="Reset"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="fd492b223f17bf03" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="619 135 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Low" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="72cd6762c5446d8e" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="691 136 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="High" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="amp toggle button" id="52afbea038eb88e6" memberName="ampToggle"
                virtualName="" explicitFocusOrder="0" pos="59 270 136 24" buttonText="Audio Amp Power"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="5a682e7a8a3d958d" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="243 338 125 24" textCol="fffffdfd"
         edTextCol="ff000000" edBkgCol="0" labelText="Init File Contents:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="delete button" id="4442e4119290b378" memberName="testButton"
              virtualName="" explicitFocusOrder="0" pos="676 206 63 24" bgColOff="ffd00009"
              buttonText="Test" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="c435d1c5f7439ac0" memberName="portBox"
            virtualName="" explicitFocusOrder="0" pos="323 292 208 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="7379b2c212d86ee1" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="275 292 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Port:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="b2a56f4745f2174c" memberName="testBaudBox"
            virtualName="" explicitFocusOrder="0" pos="632 292 104 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="e8953b892beb4114" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="559 293 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Baudrate:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="trig volume slider" id="68756f4fad130222" memberName="trigVolSlider"
          virtualName="" explicitFocusOrder="0" pos="408 147 150 24" min="-20"
          max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="ba8e00fa1d703ed8" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="274 146 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Trigger Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="stop button" id="4b667057695aa760" memberName="stopButton"
              virtualName="" explicitFocusOrder="0" pos="150 356 63 24" buttonText="StopAll"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="copy button" id="923548f55486380c" memberName="copyButton"
              virtualName="" explicitFocusOrder="0" pos="596 206 63 24" buttonText="Copy"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
