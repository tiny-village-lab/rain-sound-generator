/*
  ==============================================================================

    SynthSound.h
    Created: 14 Nov 2022 9:41:27am
    Author:  benoit

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{

public:
    bool appliesToNote (int /* midi note number */)
    {
        return true;
    }

    bool appliesToChannel (int /* midi channel */)
    {
        return true;
    }
};