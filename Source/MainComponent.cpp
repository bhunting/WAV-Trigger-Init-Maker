/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

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
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (groupComponent4 = new GroupComponent ("new group",
                                                             TRANS("MIDI")));
    groupComponent4->setColour (GroupComponent::textColourId, Colour (0x9effffff));

    addAndMakeVisible (groupComponent3 = new GroupComponent ("new group",
                                                             TRANS("Trigger Test COM Port (optional)")));
    groupComponent3->setColour (GroupComponent::textColourId, Colour (0x9effffff));

    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("Trigger Settings")));
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0x66000000));
    groupComponent->setColour (GroupComponent::textColourId, Colour (0x9effffff));

    addAndMakeVisible (quitButton = new TextButton (String()));
    quitButton->setButtonText (TRANS("Quit"));
    quitButton->addListener (this);

    addAndMakeVisible (statusBar = new Label ("new label",
                                              String()));
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
    functionBox->setTextWhenNothingSelected (String());
    functionBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    functionBox->addListener (this);

    addAndMakeVisible (typeBox = new ComboBox ("type box"));
    typeBox->setEditableText (false);
    typeBox->setJustificationType (Justification::centredLeft);
    typeBox->setTextWhenNothingSelected (String());
    typeBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    typeBox->addListener (this);

    addAndMakeVisible (invertToggle = new ToggleButton ("invert toggle"));
    invertToggle->setButtonText (TRANS("Invert"));
    invertToggle->addListener (this);

    addAndMakeVisible (polyToggle = new ToggleButton ("poly toggle"));
    polyToggle->setButtonText (TRANS("Polyphonic"));
    polyToggle->addListener (this);

    addAndMakeVisible (lowText = new TextEditor ("low text"));
    lowText->setMultiLine (false);
    lowText->setReturnKeyStartsNewLine (false);
    lowText->setReadOnly (false);
    lowText->setScrollbarsShown (false);
    lowText->setCaretVisible (true);
    lowText->setPopupMenuEnabled (true);
    lowText->setText (String());

    addAndMakeVisible (highText = new TextEditor ("high text"));
    highText->setMultiLine (false);
    highText->setReturnKeyStartsNewLine (false);
    highText->setReadOnly (false);
    highText->setScrollbarsShown (false);
    highText->setCaretVisible (true);
    highText->setPopupMenuEnabled (true);
    highText->setText (String());

    addAndMakeVisible (newButton = new TextButton ("new button"));
    newButton->setButtonText (TRANS("New"));
    newButton->addListener (this);

    addAndMakeVisible (openButton = new TextButton ("open button"));
    openButton->setButtonText (TRANS("Open"));
    openButton->addListener (this);

    addAndMakeVisible (saveAsButton = new TextButton ("save as button"));
    saveAsButton->setButtonText (TRANS("Save As"));
    saveAsButton->addListener (this);

    addAndMakeVisible (groupComponent2 = new GroupComponent ("new group",
                                                             TRANS("System")));
    groupComponent2->setColour (GroupComponent::textColourId, Colour (0x9effffff));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Function")));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Type")));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("Track Range")));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (baudBox = new ComboBox ("baud box"));
    baudBox->setEditableText (false);
    baudBox->setJustificationType (Justification::centredLeft);
    baudBox->setTextWhenNothingSelected (String());
    baudBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    baudBox->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Serial Comm.")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (volSlider = new Slider ("volume slider"));
    volSlider->setRange (-20, 10, 1);
    volSlider->setSliderStyle (Slider::LinearHorizontal);
    volSlider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    volSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    volSlider->addListener (this);

    addAndMakeVisible (label22 = new Label ("new label",
                                            TRANS("Output Volume (dB)")));
    label22->setFont (Font (15.00f, Font::plain));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (linkButton = new HyperlinkButton (TRANS("Help"),
                                                         URL ("http://robertsonics.com/wav-trigger-online-user-guide/")));
    linkButton->setTooltip (TRANS("http://robertsonics.com/wav-trigger-online-user-guide/"));
    linkButton->setButtonText (TRANS("Help"));
    linkButton->addListener (this);
    linkButton->setColour (HyperlinkButton::textColourId, Colour (0x9effffff));

    addAndMakeVisible (initText = new TextEditor ("init text editor"));
    initText->setMultiLine (true);
    initText->setReturnKeyStartsNewLine (true);
    initText->setReadOnly (false);
    initText->setScrollbarsShown (true);
    initText->setCaretVisible (true);
    initText->setPopupMenuEnabled (true);
    initText->setText (String());

    addAndMakeVisible (triggerBox = new ComboBox ("trigger combo box"));
    triggerBox->setEditableText (false);
    triggerBox->setJustificationType (Justification::centredLeft);
    triggerBox->setTextWhenNothingSelected (String());
    triggerBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    triggerBox->addListener (this);

    addAndMakeVisible (interfaceBox = new ComboBox ("interface combo box"));
    interfaceBox->setEditableText (false);
    interfaceBox->setJustificationType (Justification::centredLeft);
    interfaceBox->setTextWhenNothingSelected (String());
    interfaceBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    interfaceBox->addListener (this);

    addAndMakeVisible (addButton = new TextButton ("add button"));
    addButton->setButtonText (TRANS("Add"));
    addButton->addListener (this);

    addAndMakeVisible (updateButton = new TextButton ("update button"));
    updateButton->setButtonText (TRANS("Update"));
    updateButton->addListener (this);

    addAndMakeVisible (deleteButton = new TextButton ("delete button"));
    deleteButton->setButtonText (TRANS("Delete"));
    deleteButton->addListener (this);

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("Trigger")));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("Hardware Interface")));
    label6->setFont (Font (15.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (retriggerToggle = new ToggleButton ("retrigger toggle button"));
    retriggerToggle->setButtonText (TRANS("Re-Triggers"));
    retriggerToggle->addListener (this);

    addAndMakeVisible (resetButton = new TextButton ("reset button"));
    resetButton->setButtonText (TRANS("Reset"));
    resetButton->addListener (this);

    addAndMakeVisible (label8 = new Label ("new label",
                                           TRANS("Low")));
    label8->setFont (Font (15.00f, Font::plain));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label9 = new Label ("new label",
                                           TRANS("High")));
    label9->setFont (Font (15.00f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ampToggle = new ToggleButton ("amp toggle button"));
    ampToggle->setButtonText (TRANS("Audio Amp Power"));
    ampToggle->addListener (this);

    addAndMakeVisible (label10 = new Label ("new label",
                                            TRANS("Init File Contents:")));
    label10->setFont (Font (15.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::textColourId, Colour (0x9effffff));
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (testButton = new TextButton ("delete button"));
    testButton->setButtonText (TRANS("Test"));
    testButton->addListener (this);
    testButton->setColour (TextButton::buttonColourId, Colour (0xffd00009));

    addAndMakeVisible (portBox = new ComboBox ("new combo box"));
    portBox->setEditableText (false);
    portBox->setJustificationType (Justification::centredLeft);
    portBox->setTextWhenNothingSelected (String());
    portBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    portBox->addListener (this);

    addAndMakeVisible (label11 = new Label ("new label",
                                            TRANS("Port:")));
    label11->setFont (Font (15.00f, Font::plain));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (testBaudBox = new ComboBox ("new combo box"));
    testBaudBox->setEditableText (false);
    testBaudBox->setJustificationType (Justification::centredLeft);
    testBaudBox->setTextWhenNothingSelected (String());
    testBaudBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    testBaudBox->addListener (this);

    addAndMakeVisible (label12 = new Label ("new label",
                                            TRANS("Baudrate:")));
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
                                           TRANS("Trigger Volume (dB)")));
    label7->setFont (Font (15.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (stopButton = new TextButton ("stop button"));
    stopButton->setButtonText (TRANS("StopAll"));
    stopButton->addListener (this);

    addAndMakeVisible (copyButton = new TextButton ("copy button"));
    copyButton->setButtonText (TRANS("Copy"));
    copyButton->addListener (this);

    addAndMakeVisible (velocityToggle = new ToggleButton ("velocity toggle button"));
    velocityToggle->setButtonText (TRANS("Ignore Velocity"));
    velocityToggle->addListener (this);

    addAndMakeVisible (releaseSlider = new Slider ("release slider"));
    releaseSlider->setRange (0, 127, 1);
    releaseSlider->setSliderStyle (Slider::LinearHorizontal);
    releaseSlider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    releaseSlider->addListener (this);

    addAndMakeVisible (releaseText = new Label ("new label",
                                                TRANS("Default Release (msec)")));
    releaseText->setFont (Font (15.00f, Font::plain));
    releaseText->setJustificationType (Justification::centredLeft);
    releaseText->setEditable (false, false, false);
    releaseText->setColour (TextEditor::textColourId, Colours::black);
    releaseText->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lpToggle = new ToggleButton ("lp toggle button"));
    lpToggle->setButtonText (TRANS("Low Power Option"));
    lpToggle->addListener (this);

    addAndMakeVisible (sleepText = new Label ("new label",
                                              TRANS("Sleep\n"
                                              "After")));
    sleepText->setFont (Font (15.00f, Font::plain));
    sleepText->setJustificationType (Justification::centredLeft);
    sleepText->setEditable (false, false, false);
    sleepText->setColour (TextEditor::textColourId, Colours::black);
    sleepText->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sleepBox = new ComboBox ("sleep box"));
    sleepBox->setEditableText (false);
    sleepBox->setJustificationType (Justification::centredLeft);
    sleepBox->setTextWhenNothingSelected (String());
    sleepBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    sleepBox->addListener (this);

    addAndMakeVisible (pitchBox = new ComboBox ("pitch box"));
    pitchBox->setEditableText (false);
    pitchBox->setJustificationType (Justification::centredLeft);
    pitchBox->setTextWhenNothingSelected (String());
    pitchBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    pitchBox->addListener (this);

    addAndMakeVisible (pitchText = new Label ("new label",
                                              TRANS("Pitch Bend\n"
                                              "Semitones")));
    pitchText->setFont (Font (15.00f, Font::plain));
    pitchText->setJustificationType (Justification::centredLeft);
    pitchText->setEditable (false, false, false);
    pitchText->setColour (TextEditor::textColourId, Colours::black);
    pitchText->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (noteOffToggle = new ToggleButton ("noteOff toggle button"));
    noteOffToggle->setButtonText (TRANS("Ignore Note-Offs"));
    noteOffToggle->addListener (this);

    addAndMakeVisible (loopToggle = new ToggleButton ("new toggle button"));
    loopToggle->setButtonText (TRANS("Loop"));
    loopToggle->addListener (this);

    addAndMakeVisible (lockToggle = new ToggleButton ("lock toggle"));
    lockToggle->setButtonText (TRANS("Lock Voice"));
    lockToggle->addListener (this);

    addAndMakeVisible (channelBox = new ComboBox ("channel box"));
    channelBox->setEditableText (false);
    channelBox->setJustificationType (Justification::centredRight);
    channelBox->setTextWhenNothingSelected (String());
    channelBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    channelBox->addListener (this);

    addAndMakeVisible (channelText = new Label ("new label",
                                                TRANS("Channel")));
    channelText->setFont (Font (15.00f, Font::plain));
    channelText->setJustificationType (Justification::centredLeft);
    channelText->setEditable (false, false, false);
    channelText->setColour (TextEditor::textColourId, Colours::black);
    channelText->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 640);


    //[Constructor] You can add your own custom stuff here..

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

	sleepBox->addItem("15 sec", 1);
	sleepBox->addItem("30 sec", 2);
	sleepBox->addItem("1 min", 3);
	sleepBox->addItem("2 min", 4);
	sleepBox->addItem("3 min", 5);
	sleepBox->addItem("4 min", 6);
	sleepBox->addItem("5 min", 7);
	sleepBox->addItem("10 min", 8);
	sleepBox->addItem("15 min", 9);
	sleepBox->addItem("30 min", 10);
	sleepBox->addItem("45 min", 11);
	sleepBox->addItem("1 hr", 12);

	pitchBox->addItem("1", 1);
	pitchBox->addItem("2", 2);
	pitchBox->addItem("3", 3);
	pitchBox->addItem("4", 4);
	pitchBox->addItem("5", 5);

	channelBox->addItem("Omni", 1);
	channelBox->addItem("1", 2);
	channelBox->addItem("2", 3);
	channelBox->addItem("3", 4);
	channelBox->addItem("4", 5);
	channelBox->addItem("5", 6);
	channelBox->addItem("6", 7);
	channelBox->addItem("7", 8);
	channelBox->addItem("8", 9);
	channelBox->addItem("9", 10);
	channelBox->addItem("10", 11);
	channelBox->addItem("11", 12);
	channelBox->addItem("12", 13);
	channelBox->addItem("13", 14);
	channelBox->addItem("14", 15);
	channelBox->addItem("15", 16);
	channelBox->addItem("16", 17);

	String st;
	for (int i = 1; i < 17; i++) {
		st = "";
		st += i;
		triggerBox->addItem(st.toStdString(), i);
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
	functionBox->addItem("MIDI Bank Up", 10);
	functionBox->addItem("MIDI Bank Dn", 11);
	functionBox->addItem("Trig Bank Up", 12);
	functionBox->addItem("Trig Bank Dn", 13);

	typeBox->addItem("Edge", 1);
	typeBox->addItem("Level", 2);
	typeBox->addItem("Latch", 3);

	lowText->setInputRestrictions(4, "0123456789");
	highText->setInputRestrictions(4, "0123456789");

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

    groupComponent4 = nullptr;
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
    openButton = nullptr;
    saveAsButton = nullptr;
    groupComponent2 = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    baudBox = nullptr;
    label = nullptr;
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
    velocityToggle = nullptr;
    releaseSlider = nullptr;
    releaseText = nullptr;
    lpToggle = nullptr;
    sleepText = nullptr;
    sleepBox = nullptr;
    pitchBox = nullptr;
    pitchText = nullptr;
    noteOffToggle = nullptr;
    loopToggle = nullptr;
    lockToggle = nullptr;
    channelBox = nullptr;
    channelText = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff4d66b6));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    groupComponent4->setBounds (32, 259, 184, 220);
    groupComponent3->setBounds (243, 276, 526, 76);
    groupComponent->setBounds (244, 16, 526, 249);
    quitButton->setBounds (148, 533, 63, 24);
    statusBar->setBounds (0, getHeight() - 24, proportionOfWidth (1.0000f), 24);
    functionBox->setBounds (625, 62, 112, 24);
    typeBox->setBounds (510, 62, 98, 24);
    invertToggle->setBounds (273, 105, 65, 24);
    polyToggle->setBounds (447, 105, 96, 24);
    lowText->setBounds (626, 129, 44, 20);
    highText->setBounds (692, 129, 44, 20);
    newButton->setBounds (36, 571, 63, 24);
    openButton->setBounds (36, 500, 63, 24);
    saveAsButton->setBounds (36, 535, 63, 24);
    groupComponent2->setBounds (32, 16, 184, 233);
    label2->setBounds (619, 39, 63, 24);
    label3->setBounds (505, 38, 47, 24);
    label4->setBounds (619, 106, 87, 24);
    baudBox->setBounds (59, 58, 133, 24);
    label->setBounds (52, 34, 105, 24);
    volSlider->setBounds (52, 112, 140, 24);
    label22->setBounds (51, 90, 150, 24);
    linkButton->setBounds (145, 570, 68, 24);
    initText->setBounds (248, 381, 520, 215);
    triggerBox->setBounds (277, 62, 56, 24);
    interfaceBox->setBounds (350, 62, 143, 24);
    addButton->setBounds (356, 221, 63, 24);
    updateButton->setBounds (436, 221, 63, 24);
    deleteButton->setBounds (516, 221, 63, 24);
    label5->setBounds (271, 38, 56, 24);
    label6->setBounds (344, 38, 141, 24);
    retriggerToggle->setBounds (343, 105, 95, 24);
    resetButton->setBounds (276, 221, 63, 24);
    label8->setBounds (621, 147, 40, 24);
    label9->setBounds (687, 148, 40, 24);
    ampToggle->setBounds (51, 145, 136, 24);
    label10->setBounds (243, 357, 125, 24);
    testButton->setBounds (676, 221, 63, 24);
    portBox->setBounds (323, 308, 208, 24);
    label11->setBounds (275, 308, 48, 24);
    testBaudBox->setBounds (632, 308, 104, 24);
    label12->setBounds (559, 309, 72, 24);
    trigVolSlider->setBounds (408, 180, 140, 24);
    label7->setBounds (274, 179, 150, 24);
    stopButton->setBounds (148, 499, 63, 24);
    copyButton->setBounds (596, 221, 63, 24);
    velocityToggle->setBounds (51, 419, 150, 24);
    releaseSlider->setBounds (52, 388, 140, 24);
    releaseText->setBounds (51, 366, 155, 24);
    lpToggle->setBounds (51, 175, 136, 24);
    sleepText->setBounds (51, 199, 56, 32);
    sleepBox->setBounds (96, 203, 96, 24);
    pitchBox->setBounds (134, 330, 58, 24);
    pitchText->setBounds (52, 322, 80, 40);
    noteOffToggle->setBounds (51, 442, 150, 24);
    loopToggle->setBounds (546, 106, 62, 24);
    lockToggle->setBounds (273, 138, 93, 24);
    channelBox->setBounds (118, 289, 74, 24);
    channelText->setBounds (51, 288, 62, 24);
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
    else if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..

        FileChooser fc ("Choose a file to open...",
				File::getCurrentWorkingDirectory().getChildFile("*.ini"),
                "*.ini",
                true);
        if (fc.browseForFileToOpen ()) {
			File file = fc.getResult();
			open(file);
		}

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
    else if (buttonThatWasClicked == velocityToggle)
    {
        //[UserButtonCode_velocityToggle] -- add your button handler code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MIDI"))
				mInitStrings.remove(n);
		}
		String bStr = "#MIDI ";
		int m = 1;
		if (velocityToggle->getToggleState())
			m |= 2;
		if (noteOffToggle->getToggleState())
			m |= 4;
		bStr += m;
		bStr += newLine;
		mInitStrings.insert(0, bStr);
		updateInitWindow();

        //[/UserButtonCode_velocityToggle]
    }
    else if (buttonThatWasClicked == lpToggle)
    {
        //[UserButtonCode_lpToggle] -- add your button handler code here..

		// Add an entry to enable if toggle state is true
		if (lpToggle->getToggleState()) {
			sleepText->setEnabled(true);
			sleepBox->setEnabled(true);
			sleepBox->setSelectedId(7, dontSendNotification);
			String bStr = "#LPWR 300";
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		// Look for and delete any existing LPWR entry
		else {
			for (int n = 0; n < mInitStrings.size(); n++) {
				if (mInitStrings[n].startsWith("#LPWR"))
					mInitStrings.remove(n);
			}
			sleepText->setEnabled(false);
			sleepBox->setEnabled(false);
		}
		updateInitWindow();

        //[/UserButtonCode_lpToggle]
    }
    else if (buttonThatWasClicked == noteOffToggle)
    {
        //[UserButtonCode_noteOffToggle] -- add your button handler code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MIDI"))
				mInitStrings.remove(n);
		}
		String bStr = "#MIDI ";
		int m = 1;
		if (velocityToggle->getToggleState())
			m |= 2;
		if (noteOffToggle->getToggleState())
			m |= 4;
		bStr += m;
		bStr += newLine;
		mInitStrings.insert(0, bStr);
		updateInitWindow();

        //[/UserButtonCode_noteOffToggle]
    }
    else if (buttonThatWasClicked == loopToggle)
    {
        //[UserButtonCode_loopToggle] -- add your button handler code here..
        //[/UserButtonCode_loopToggle]
    }
    else if (buttonThatWasClicked == lockToggle)
    {
        //[UserButtonCode_lockToggle] -- add your button handler code here..
        //[/UserButtonCode_lockToggle]
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
				loopToggle->setEnabled(true);
				loopToggle->setToggleState(false, dontSendNotification);
			break;
			case 2: // Level
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				loopToggle->setEnabled(false);
				loopToggle->setToggleState(false, dontSendNotification);
			break;
			case 3: // Latched
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(false, dontSendNotification);
				loopToggle->setEnabled(false);
				loopToggle->setToggleState(false, dontSendNotification);
			break;
			default:
			break;
		}

        //[/UserComboBoxCode_typeBox]
    }
    else if (comboBoxThatHasChanged == baudBox)
    {
        //[UserComboBoxCode_baudBox] -- add your combo box handling code here..

		// Look for and delete any existing BAUD, MIDI, MREL or BEND entries
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#BAUD"))
				mInitStrings.remove(n);
		}
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MIDI"))
				mInitStrings.remove(n);
		}
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MREL"))
				mInitStrings.remove(n);
		}
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#BEND"))
				mInitStrings.remove(n);
		}
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MCHN"))
				mInitStrings.remove(n);
		}
		// Add an entry if not the default
		if (baudBox->getSelectedId() < 6) {
			releaseSlider->setEnabled(false);
			velocityToggle->setEnabled(false);
			noteOffToggle->setEnabled(false);
			releaseText->setEnabled(false);
			releaseSlider->setValue(0.0, dontSendNotification);
			pitchBox->setEnabled(false);
			pitchText->setEnabled(false);
			pitchBox->setSelectedId(2, dontSendNotification);
			channelBox->setEnabled(false);
			channelText->setEnabled(false);
			channelBox->setSelectedId(1, dontSendNotification);
			velocityToggle->setToggleState(false, dontSendNotification);
			noteOffToggle->setToggleState(false, dontSendNotification);
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
			velocityToggle->setEnabled(true);
			noteOffToggle->setEnabled(true);
			releaseText->setEnabled(true);
			releaseSlider->setEnabled(true);
			pitchBox->setEnabled(true);
			pitchText->setEnabled(true);
			channelBox->setEnabled(true);
			channelText->setEnabled(true);
			String bStr = "#MIDI 1 ";
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserComboBoxCode_baudBox]
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
    else if (comboBoxThatHasChanged == sleepBox)
    {
        //[UserComboBoxCode_sleepBox] -- add your combo box handling code here..

		// Look for and delete any existing LPWR entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#LPWR"))
				mInitStrings.remove(n);
		}

		String bStr = "#LPWR ";
		switch (sleepBox->getSelectedId()) {
			case 1:
				bStr += "15";
			break;
			case 2:
				bStr += "30";
			break;
			case 3:
				bStr += "60";
			break;
			case 4:
				bStr += "120";
			break;
			case 5:
				bStr += "180";
			break;
			case 6:
				bStr += "240";
			break;
			case 7:
				bStr += "300";
			break;
			case 8:
				bStr += "600";
			break;
			case 9:
				bStr += "900";
			break;
			case 10:
				bStr += "1800";
			break;
			case 11:
				bStr += "2700";
			break;
			case 12:
				bStr += "3600";
			break;
		}
		bStr += newLine;
		mInitStrings.insert(0, bStr);
		updateInitWindow();

        //[/UserComboBoxCode_sleepBox]
    }
    else if (comboBoxThatHasChanged == pitchBox)
    {
        //[UserComboBoxCode_pitchBox] -- add your combo box handling code here..

		// Look for and delete any existing BEND entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#BEND"))
				mInitStrings.remove(n);
		}
		String bStr;
		switch (pitchBox->getSelectedId()) {
			case 1:
				bStr += "#BEND 1";
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			break;
			case 3:
				bStr += "#BEND 3";
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			break;
			case 4:
				bStr += "#BEND 4";
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			break;
			case 5:
				bStr += "#BEND 5";
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			break;
		}
		updateInitWindow();

        //[/UserComboBoxCode_pitchBox]
    }
    else if (comboBoxThatHasChanged == channelBox)
    {
        //[UserComboBoxCode_channelBox] -- add your combo box handling code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MCHN"))
				mInitStrings.remove(n);
		}
		int c = channelBox->getSelectedId();
		if (c > 1) {
			String cStr;
			cStr += "#MCHN ";
			cStr += (c - 1);
			cStr += newLine;
			mInitStrings.insert(0, cStr);
		}
		updateInitWindow();

        //[/UserComboBoxCode_channelBox]
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

			// Look for and delete any existing VOLM entry
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
    else if (sliderThatWasMoved == releaseSlider)
    {
        //[UserSliderCode_releaseSlider] -- add your slider handling code here..

			int i = (int)releaseSlider->getValue();

			// Look for and delete any existing BAUD entry
			for (int n = 0; n < mInitStrings.size(); n++) {
				if (mInitStrings[n].startsWith("#MREL"))
					mInitStrings.remove(n);
			}

			// Add an entry if not the default
			if (i != 0) {
				String bStr = "#MREL ";
				bStr += i;
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			}
			updateInitWindow();

        //[/UserSliderCode_releaseSlider]
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
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="0" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="800" initialHeight="640">
  <BACKGROUND backgroundColour="ff4d66b6"/>
  <GROUPCOMPONENT name="new group" id="90ec82064f979d06" memberName="groupComponent4"
                  virtualName="" explicitFocusOrder="0" pos="32 259 184 220" textcol="9effffff"
                  title="MIDI"/>
  <GROUPCOMPONENT name="new group" id="242a01730ad6db8e" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="243 276 526 76" textcol="9effffff"
                  title="Trigger Test COM Port (optional)"/>
  <GROUPCOMPONENT name="new group" id="38c25bfaed540c9a" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="244 16 526 249" outlinecol="66000000"
                  textcol="9effffff" title="Trigger Settings"/>
  <TEXTBUTTON name="" id="bcf4f7b0888effe5" memberName="quitButton" virtualName=""
              explicitFocusOrder="0" pos="148 533 63 24" buttonText="Quit"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="ef8d15cc5a4b63c3" memberName="statusBar"
         virtualName="" explicitFocusOrder="0" pos="0 0Rr 100% 24" bkgCol="ff8da3da"
         textCol="ff000000" outlineCol="0" edTextCol="ff000000" edBkgCol="0"
         labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="function box" id="8ec5e1a0b6bf5e23" memberName="functionBox"
            virtualName="" explicitFocusOrder="0" pos="625 62 112 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="type box" id="d1fcc0036164e910" memberName="typeBox" virtualName=""
            explicitFocusOrder="0" pos="510 62 98 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TOGGLEBUTTON name="invert toggle" id="a46ca2e5cccc18cc" memberName="invertToggle"
                virtualName="" explicitFocusOrder="0" pos="273 105 65 24" buttonText="Invert"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="poly toggle" id="429d46bb36488187" memberName="polyToggle"
                virtualName="" explicitFocusOrder="0" pos="447 105 96 24" buttonText="Polyphonic"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTEDITOR name="low text" id="34a63e8887bfc5f3" memberName="lowText" virtualName=""
              explicitFocusOrder="0" pos="626 129 44 20" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="0" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="high text" id="78ea03ee33471435" memberName="highText"
              virtualName="" explicitFocusOrder="0" pos="692 129 44 20" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="0"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="b85453e71d7e819a" memberName="newButton"
              virtualName="" explicitFocusOrder="0" pos="36 571 63 24" buttonText="New"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="open button" id="aff16e2440c1e77e" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="36 500 63 24" buttonText="Open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="save as button" id="36951dd779d924d0" memberName="saveAsButton"
              virtualName="" explicitFocusOrder="0" pos="36 535 63 24" buttonText="Save As"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <GROUPCOMPONENT name="new group" id="6ec7de23acb7bc6f" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="32 16 184 233" textcol="9effffff"
                  title="System"/>
  <LABEL name="new label" id="55d41def757f7937" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="619 39 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Function" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ab69c117bbd4949c" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="505 38 47 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Type" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="76f809313cab5795" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="619 106 87 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Track Range" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="baud box" id="34072d5a8cd3a40e" memberName="baudBox" virtualName=""
            explicitFocusOrder="0" pos="59 58 133 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="b168245de12e2a99" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="52 34 105 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Serial Comm." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="fbfedd66eca0907d" memberName="volSlider"
          virtualName="" explicitFocusOrder="0" pos="52 112 140 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="8236b56510d8f8c8" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="51 90 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <HYPERLINKBUTTON name="link button" id="f202f29b31c62ae" memberName="linkButton"
                   virtualName="" explicitFocusOrder="0" pos="145 570 68 24" tooltip="http://robertsonics.com/wav-trigger-online-user-guide/"
                   textCol="9effffff" buttonText="Help" connectedEdges="0" needsCallback="1"
                   radioGroupId="0" url="http://robertsonics.com/wav-trigger-online-user-guide/"/>
  <TEXTEDITOR name="init text editor" id="affceb0f94323c59" memberName="initText"
              virtualName="" explicitFocusOrder="0" pos="248 381 520 215" initialText=""
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <COMBOBOX name="trigger combo box" id="254229b66c221ce9" memberName="triggerBox"
            virtualName="" explicitFocusOrder="0" pos="277 62 56 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="interface combo box" id="7acafe3ed6d58318" memberName="interfaceBox"
            virtualName="" explicitFocusOrder="0" pos="350 62 143 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="add button" id="82c93bdd5a7a904" memberName="addButton"
              virtualName="" explicitFocusOrder="0" pos="356 221 63 24" buttonText="Add"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="update button" id="1bccddea64d1188d" memberName="updateButton"
              virtualName="" explicitFocusOrder="0" pos="436 221 63 24" buttonText="Update"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="delete button" id="59540029ea4972fb" memberName="deleteButton"
              virtualName="" explicitFocusOrder="0" pos="516 221 63 24" buttonText="Delete"
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
                virtualName="" explicitFocusOrder="0" pos="343 105 95 24" buttonText="Re-Triggers"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="reset button" id="4dc7d5288c0df2c4" memberName="resetButton"
              virtualName="" explicitFocusOrder="0" pos="276 221 63 24" buttonText="Reset"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="fd492b223f17bf03" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="621 147 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Low" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="72cd6762c5446d8e" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="687 148 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="High" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="amp toggle button" id="52afbea038eb88e6" memberName="ampToggle"
                virtualName="" explicitFocusOrder="0" pos="51 145 136 24" buttonText="Audio Amp Power"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="5a682e7a8a3d958d" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="243 357 125 24" textCol="9effffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Init File Contents:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="delete button" id="4442e4119290b378" memberName="testButton"
              virtualName="" explicitFocusOrder="0" pos="676 221 63 24" bgColOff="ffd00009"
              buttonText="Test" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="c435d1c5f7439ac0" memberName="portBox"
            virtualName="" explicitFocusOrder="0" pos="323 308 208 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="7379b2c212d86ee1" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="275 308 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Port:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="b2a56f4745f2174c" memberName="testBaudBox"
            virtualName="" explicitFocusOrder="0" pos="632 308 104 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="e8953b892beb4114" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="559 309 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Baudrate:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="trig volume slider" id="68756f4fad130222" memberName="trigVolSlider"
          virtualName="" explicitFocusOrder="0" pos="408 180 140 24" min="-20"
          max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="ba8e00fa1d703ed8" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="274 179 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Trigger Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="stop button" id="4b667057695aa760" memberName="stopButton"
              virtualName="" explicitFocusOrder="0" pos="148 499 63 24" buttonText="StopAll"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="copy button" id="923548f55486380c" memberName="copyButton"
              virtualName="" explicitFocusOrder="0" pos="596 221 63 24" buttonText="Copy"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="velocity toggle button" id="f4db3cfaede9e9fd" memberName="velocityToggle"
                virtualName="" explicitFocusOrder="0" pos="51 419 150 24" buttonText="Ignore Velocity"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="release slider" id="15aa3da61a7b51ad" memberName="releaseSlider"
          virtualName="" explicitFocusOrder="0" pos="52 388 140 24" min="0"
          max="127" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="cdfea73ff3c1eb4b" memberName="releaseText"
         virtualName="" explicitFocusOrder="0" pos="51 366 155 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Default Release (msec)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="lp toggle button" id="4a8fb34d9cce4629" memberName="lpToggle"
                virtualName="" explicitFocusOrder="0" pos="51 175 136 24" buttonText="Low Power Option"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="29ad17d33c6f6ae8" memberName="sleepText"
         virtualName="" explicitFocusOrder="0" pos="51 199 56 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Sleep&#10;After" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="sleep box" id="9459a97eaead09f6" memberName="sleepBox"
            virtualName="" explicitFocusOrder="0" pos="96 203 96 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="pitch box" id="7d52d2e9e85b09c8" memberName="pitchBox"
            virtualName="" explicitFocusOrder="0" pos="134 330 58 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="e118a36298cb29b5" memberName="pitchText"
         virtualName="" explicitFocusOrder="0" pos="52 322 80 40" edTextCol="ff000000"
         edBkgCol="0" labelText="Pitch Bend&#10;Semitones" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="noteOff toggle button" id="9133c3e894575bc8" memberName="noteOffToggle"
                virtualName="" explicitFocusOrder="0" pos="51 442 150 24" buttonText="Ignore Note-Offs"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="352d2b82ce0335a5" memberName="loopToggle"
                virtualName="" explicitFocusOrder="0" pos="546 106 62 24" buttonText="Loop"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="lock toggle" id="eaa2db56f6f7483f" memberName="lockToggle"
                virtualName="" explicitFocusOrder="0" pos="273 138 93 24" buttonText="Lock Voice"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <COMBOBOX name="channel box" id="bdc4048aa021074" memberName="channelBox"
            virtualName="" explicitFocusOrder="0" pos="118 289 74 24" editable="0"
            layout="34" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="b89b3718e969a29a" memberName="channelText"
         virtualName="" explicitFocusOrder="0" pos="51 288 62 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Channel" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
