#pragma once

class GolemClimbWeakPoint
{
public:
    GolemClimbWeakPoint(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, char const*, char const*, char const*, bool, bool);
    appear();
    kill();
    exeWait();
    exePanic();
    exeDamage();
    exeBreak();
    exeBlowDown();
    exeDemo();
    setWait();
    setPanic();
    receiveMsgThrust(al::HitSensor*, al::HitSensor*);
    receiveMsgHipDrop(al::HitSensor*, al::HitSensor*);
    startBreak();
    startDemo(char const*);
    isBreak() const;
};
