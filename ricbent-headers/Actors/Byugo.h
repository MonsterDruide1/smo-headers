#pragma once

class Byugo
{
public:
    Byugo(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    calcBlowPowerRate() const;
    calcWindForce(sead::Vector3<float>*, sead::Vector3<float> const&, float) const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeDelay();
    exeRevive();
    exeAppear();
    exeWait();
    isMoveAtWait() const;
    updateKeyMove();
    exeBlowSign();
    exeBlowStart();
    exeBlow();
    isMoveAtBlow() const;
    sendBlowMsgToCollision();
    exeBlowEnd();
    exeReactionBlow();
    exeDamageCap();
    exeHack();
    exeSwoon();
    getSideStart() const;
    getFrontEnd() const;
    getSideEnd() const;
    getFrontStart() const;
};
