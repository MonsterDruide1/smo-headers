#pragma once

namespace al { 

class WaveVibrationHolder
{
public:
    WaveVibrationHolder(al::GamePadSystem const*);
    loadData();
    update();
    findWaveVibrationData(char const*) const;
    findPlayableVibrationPlayer(int) const;
    findId(int) const;
    stopAll();
    getUsePadNum() const;
    pause();
    endPause();
    startVibrationDirectValue(int, float, float, float, float, float, float);
    stopVibrationDirectValue(int);
    audioFrameProcess_();
    ~WaveVibrationHolder();
};

} 
