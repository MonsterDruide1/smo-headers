#pragma once

class KoopaFireBeam
{
public:
    KoopaFireBeam(char const*);
    init(al::ActorInitInfo const&);
    appearSign();
    startAppear();
    disappear();
    isAppearSign() const;
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppearSign();
    exeAppear();
    exeWait();
    exeDisappear();
};
