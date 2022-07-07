#pragma once

class HelpAmiiboCoinCollect
{
public:
    HelpAmiiboCoinCollect(HelpAmiiboDirector*, al::LiveActor*);
    initAfterPlacement(al::ActorInitInfo const&);
    isTriggerTouch(al::NfpInfo const&) const;
    isEnableUse();
    activate();
    execute();
    deleteHintEffect();
    appearEffect();
    killEffect();
    isUseDummyModel(al::LiveActor*);
    getDummyEffectEmitPos(sead::Vector3<float>*, al::LiveActor*);
    getType() const;
};
