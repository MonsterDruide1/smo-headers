#pragma once

class GoalMark
{
public:
    GoalMark(char const*);
    init(al::ActorInitInfo const&);
    disappear();
    reAppear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    movement();
    calcAnim();
    activate();
    exeSleep();
    killIfIsGotShine();
    exeStop();
    exeWait();
    exeWaitUnderPyramid();
    exeHide();
};
