/*
  ==============================================================================

    SynthVoice.h
    Created: 14 Nov 2022 9:41:35am
    Author:  benoit

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "SynthSound.h"

class SynthVoice : public juce::SynthesiserVoice
{

public:
    SynthVoice()
    {
        
    }

    bool canPlaySound (juce::SynthesiserSound* sound)
    {
        return dynamic_cast<SynthSound*>(sound) != nullptr;
    }

    void startNote (int midiNoteNumber, float velocity, juce::SynthesiserSound* sound, int currentPitchWheelPosition)
    {
        frequency = juce::MidiMessage::getMidiNoteInHertz(midiNoteNumber);
        std::cout << midiNoteNumber << std::endl;
    }

    void stopNote (float velocity, bool allowTailOff)
    {
        clearCurrentNote();
    }

    void pitchWheelMoved (int newPitchWheelValue)
    {

    }

    void controllerMoved (int controllerNumber, int newControllerValue)
    {

    }

    void renderNextBlock (juce::AudioBuffer<float> &outputBuffer, int startSample, int numSamples)
    {

    }
private:
    double level;
    double frequency;
};
