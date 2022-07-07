#pragma once

class FireBlowerCap
{
public:
    FireBlowerCap();
    initCap(al::LiveActor*, al::ActorInitInfo const&);
    appear();
    disappear(al::HitSensor const*, al::HitSensor const*);
    exeAppear();
    exeWait();
    appearResetAttackStart();
    exeResetAttackStart();
    exeDisappear();
    isDisappear() const;
};
