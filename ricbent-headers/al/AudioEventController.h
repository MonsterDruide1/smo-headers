#pragma once

namespace al { 

class AudioEventController
{
public:
    AudioEventController(al::AudioDirector const*, char const*);
    init3D(al::AreaObjDirector*, al::AudioEffectController*);
    initAfterInitPlacement(al::AudioDirector const*);
    update();
    isEnableAudioEvent(int) const;
    finalize();
    setPlayerHolder(al::PlayerHolder const*);
    activate();
    deactivate();
    activateEachAudioEvent(int, bool);
    deactivateEachAudioEvent(int, bool);
    isInBgmStopArea(char const*);
    getBgmSituationNameByAreaChecker();
    getAudioEffectNameByAreaChecker();
    isEnableBgmChangeEvent() const;
    isEnableBgmSituationChangeEvent() const;
    isEnableAllAudioEvent() const;
    isDisableAllAudioEvent() const;
    getAudioKeeper() const;
    getAreaObjDirector() const;
    EVENT_DISABLE_ALL;
    EVENT_CHANGE_BGM;
    EVENT_CHANGE_BGM_SITUATION;
    EVENT_CHANGE_AUIO_EFFECT;
    EVENT_CHANGE_LISTNER_PARAM;
    EVENT_PLAY_SE;
    EVENT_ENABLE_ALL;
};

} 
