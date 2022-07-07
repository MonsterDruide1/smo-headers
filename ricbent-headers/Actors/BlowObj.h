#pragma once

class BlowObj
{
public:
    BlowObj(char const*);
    init(al::ActorInitInfo const&);
    killByStageSwitch();
    initWithMapunitArgs(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startClipped();
    respawn();
    exeWait();
    exeBlow();
    tryAppearItem(sead::Vector3<float> const&, char const*);
    exeInSaucePan();
    exeEatingByYoshi();
    endEatingByYoshi();
    exeBreak();
    exeWaitRespawn();
};
