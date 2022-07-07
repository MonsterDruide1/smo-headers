#pragma once

class HelpAmiiboDirector
{
public:
    HelpAmiiboDirector();
    init(ProjectNfpDirector*, al::PlayerHolder const*, al::AudioDirector*, al::LayoutInitInfo const&);
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    isTriggerTouchAmiiboMario() const;
    isTriggerTouchAmiiboPeach() const;
    isTriggerTouchAmiiboKoopa() const;
    isTriggerTouchAmiiboYoshi() const;
    isTriggerTouchAmiiboAll() const;
    execute();
    reset();
    isHelpAmiiboMode() const;
    appearCoinCollectEffect();
    killCoinCollectEffect();
    exeWait();
    exeCountHold();
    exeActive();
    tryExecute(al::NfpInfo const*);
    exeIconClose();
    getSceneObjName() const;
    ~HelpAmiiboDirector();
    getAudioKeeper() const;
    getNerveKeeper() const;
};
