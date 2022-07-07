#pragma once

class DoorAreaChangeCap
{
public:
    DoorAreaChangeCap(char const*);
    init(al::ActorInitInfo const&);
    isGotShine(al::ActorInitInfo const&);
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeNoStart();
    exeCloseWait();
    exeDelayOpen();
    exeOpen();
    exeClose();
};
