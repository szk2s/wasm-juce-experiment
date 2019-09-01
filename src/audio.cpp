//
// Created by Satoshi Suzuki on 2019-08-31.
//
#include "../JuceLibraryCode/JuceHeader.h"
#include "audio.h"
void initializeJuce()
{
    ScopedJuceInitialiser_GUI plattform;
}

void playTestSound()
{
    AudioDeviceManager deviceManager;
    deviceManager.initialise(255,255, nullptr, true);
    deviceManager.playTestSound();
    Thread::sleep(2000);
}