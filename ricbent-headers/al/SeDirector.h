#pragma once

namespace al { 

class SeDirector
{
public:
    SeDirector();
    init(al::AudioDirector const*, al::SeDirectorInitInfo const&, char const*, int, al::AudioSystemInfo const*, al::MeInfoKeeper*, al::IUseActiveBgmLine const*);
    getSeDataBase();
    init3D(al::SeDirectorInitInfo const&);
    initAfterInitPlacement(al::AreaObjDirector*);
    finalize();
    update();
    isSystemPaused() const;
    setPlayerHolder(al::PlayerHolder const*);
    notifyIsModeHandheld(bool);
    addRequest(al::SeRequestParam*, char const*, int, bool);
    notifiedUpdateMaterial(al::SeEmitter*, char const*, int);
    pauseSystem(bool, char const*, unsigned int);
    startSituation(char const*, int, int, int);
    endSituation(char const*, int);
    checkIsActiveSituation(char const*) const;
    getDuckingVolume() const;
    getListener(int) const;
    setAudioBusSendController(al::AudioBusSendController*);
    requestPlayLoopSeSequence(char const*, al::MeInfo const*, int);
    getStageEffectName() const;
};

} 
