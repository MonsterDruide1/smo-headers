#pragma once

namespace al { 

class AudioSystem
{
public:
    AudioSystem();
    init(al::AudioSystemInitInfo const&);
    initDataBase();
    initResourcePlayer(al::AudioSystemInitInfo const&);
    applyDeviceVolume();
    updateHWOutputSetting();
    changeFinalMixInputBgmChVolume();
    initDebugModule(al::AudioSystemInitInfo const&);
    initSystemInfo();
    update();
    finalize();
    addAudiioFrameProccess(aal::IAudioFrameProcess*);
    removeAudiioFrameProccess(aal::IAudioFrameProcess*);
    pauseSystemImmediately(bool, char const*, bool);
};

} 
