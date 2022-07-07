#pragma once

class TimeBalloonModel
{
public:
    TimeBalloonModel();
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearPlayGet();
    appearPlaySet();
    exePlaySet();
    exePlayGet();
    exeSuccess();
    exeFailure();
    isSuccess() const;
    setFailure();
};
