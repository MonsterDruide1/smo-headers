#pragma once

class BombTailBombHolder
{
public:
    BombTailBombHolder(al::ActorInitInfo const&, int, al::LiveActor const*, bool);
    startWaitForDemo(sead::Matrix34<float> const*);
    popFromDamageArray();
    startAppear(sead::Matrix34<float> const*);
    startPrepareAttackChance(sead::Matrix34<float> const*);
    startPopUpThrow(sead::Vector3<float> const&, sead::Vector3<float> const&);
    startPopUp(sead::Vector3<float> const&, sead::Vector3<float> const&, int);
    startPopUpUFO(sead::Vector3<float> const&, sead::Vector3<float> const&);
    forceDisappear();
    kill();
};
