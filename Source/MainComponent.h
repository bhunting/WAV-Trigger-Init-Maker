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

#ifndef __JUCE_HEADER_9002020A4DD09B20__
#define __JUCE_HEADER_9002020A4DD09B20__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Communicator.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public ChangeListener,
                       public ButtonListener,
                       public ComboBoxListener,
                       public SliderListener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void reset(void);
	void resetTrigger(void);
	int getTriggerNum(String tStr);
	int findTrigger(int t);
	bool insertTriggerString(void);
	String buildTriggerDesc(void);
	bool testTrigger(void);
	bool parseTriggerDesc(String tStr);
	void deleteInitString(int n);
	void updateInitWindow(void);
	void save(File saveFile);
	void changeListenerCallback(ChangeBroadcaster *);

    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void sliderValueChanged (Slider* sliderThatWasMoved);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	StringArray mInitStrings;

	Communicator *pCom;		// Our Communicator
	bool m_portOpenFlag;	// port open flag
	int m_portBoxItem;		// Current portBox item index

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<GroupComponent> groupComponent4;
    ScopedPointer<GroupComponent> groupComponent3;
    ScopedPointer<GroupComponent> groupComponent;
    ScopedPointer<TextButton> quitButton;
    ScopedPointer<Label> statusBar;
    ScopedPointer<ComboBox> functionBox;
    ScopedPointer<ComboBox> typeBox;
    ScopedPointer<ToggleButton> invertToggle;
    ScopedPointer<ToggleButton> polyToggle;
    ScopedPointer<TextEditor> lowText;
    ScopedPointer<TextEditor> highText;
    ScopedPointer<TextButton> newButton;
    ScopedPointer<TextButton> saveButton;
    ScopedPointer<TextButton> openButton;
    ScopedPointer<TextButton> saveAsButton;
    ScopedPointer<GroupComponent> groupComponent2;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<ComboBox> baudBox;
    ScopedPointer<Label> label;
    ScopedPointer<Slider> volSlider;
    ScopedPointer<Label> label22;
    ScopedPointer<HyperlinkButton> linkButton;
    ScopedPointer<TextEditor> initText;
    ScopedPointer<ComboBox> triggerBox;
    ScopedPointer<ComboBox> interfaceBox;
    ScopedPointer<TextButton> addButton;
    ScopedPointer<TextButton> updateButton;
    ScopedPointer<TextButton> deleteButton;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<ToggleButton> retriggerToggle;
    ScopedPointer<TextButton> resetButton;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;
    ScopedPointer<ToggleButton> ampToggle;
    ScopedPointer<Label> label10;
    ScopedPointer<TextButton> testButton;
    ScopedPointer<ComboBox> portBox;
    ScopedPointer<Label> label11;
    ScopedPointer<ComboBox> testBaudBox;
    ScopedPointer<Label> label12;
    ScopedPointer<Slider> trigVolSlider;
    ScopedPointer<Label> label7;
    ScopedPointer<TextButton> stopButton;
    ScopedPointer<TextButton> copyButton;
    ScopedPointer<ToggleButton> velocityToggle;
    ScopedPointer<Slider> releaseSlider;
    ScopedPointer<Label> releaseText;
    ScopedPointer<ToggleButton> lpToggle;
    ScopedPointer<Label> sleepText;
    ScopedPointer<ComboBox> sleepBox;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_9002020A4DD09B20__
