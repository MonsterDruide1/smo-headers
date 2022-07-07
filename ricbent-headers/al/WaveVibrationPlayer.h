#pragma once

namespace al { 

class WaveVibrationPlayer
{
public:
    WaveVibrationPlayer(nn::hid::VibrationMixer*, nn::hid::VibrationMixer*);
    update();
    startOneTime(al::WaveVibrationData const*, float, float, float, float, bool);
    start(al::WaveVibrationData const*, float, float, float, float, bool);
    startLoop(al::WaveVibrationData const*, float, float, float, float, bool);
    stop();
    pause();
    endPause();
    changeVolume(float, float);
    isPlaying() const;
    changePitch(float, float);
    changeVolumeAndPitch(float, float, float, float);
};

} 
