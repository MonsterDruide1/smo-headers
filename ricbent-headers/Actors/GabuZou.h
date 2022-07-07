#pragma once

class GabuZou
{
public:
    GabuZou(char const*);
    init(al::ActorInitInfo const&);
    calcSerchSizeX() const;
    calcSerchSizeZ() const;
    initAfterPlacement();
    checkCollision(sead::Vector3<int> const&) const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setGabuzouGroup(GabuZouGroup const*);
    checkReach(int, int) const;
    checkReach(sead::Vector3<float> const&) const;
    isInSerchRange(sead::Vector3<int> const&) const;
    calcPlayerExpectPos() const;
    isLeftPlayer() const;
    nextNerve();
    exeWait();
    exeMove();
    exeTurn();
    exeRiseSign();
    exeRise();
    exeAttackSign();
    exeAttack();
    exeSink();
};
