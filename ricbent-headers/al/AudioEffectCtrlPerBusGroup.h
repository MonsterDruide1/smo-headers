#pragma once

namespace al { 

class AudioEffectCtrlPerBusGroup
{
public:
    AudioEffectCtrlPerBusGroup(al::AudioBusSendController*);
    init();
    startFinalize();
    tryFinalize();
    update();
    setFromBusSettingInfo(al::AudioBusSettingInfo const*, al::AudioEffectCtrlPerBus****, al::AudioBusSendController*);
    startEffect(al::AudioEffectInfo const*);
    endEffect(al::AudioEffectInfo const*, bool);
    pause();
    resume();
    getBusGroupName() const;
    exeWait();
    exeWaitFadeOutBusSend();
    exeWaitEffectUnitDisable();
    exePrepareRun();
    exePrepareWait();
    exeRun();
    exeWaitDisableAllAudioEffectUnit();
    exeWaitClearAllEffectFromBus();
    exeFinishedFinalize();
    ~AudioEffectCtrlPerBusGroup();
};

} 
