#pragma once

namespace al { 

class AudioEffectController
{
public:
    AudioEffectController(al::AudioBusSendController*, al::AudioEffectLevelDetector*);
    init(al::AudioEffectDataBase const*);
    createEffectUnit(char const*);
    isPossibleToStartAudioEffect();
    startAsyncFinalize(int);
    updateAsyncFinalize();
    finalize();
    update();
    startEffect(char const*);
    endEffect(char const*);
    pauseEffectBusGroup(char const*);
    resumeEffectBusGroup(char const*);
    exeRun();
    exePrepareFinalize();
    exeFinalizeBusGroup();
    exeFinalizeEffectUnit();
    exeEndFinalize();
    ~AudioEffectController();
};

} 
