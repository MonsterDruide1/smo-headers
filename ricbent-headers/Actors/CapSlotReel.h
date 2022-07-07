#pragma once

class CapSlotReel
{
public:
    CapSlotReel(char const*, al::LiveActor*, al::LiveActor*);
    init(al::ActorInitInfo const&);
    appear();
    getItemType() const;
    isStopped() const;
    isDecidedItem() const;
    isCapHit(al::SensorMsg const*, al::HitSensor*, al::HitSensor*) const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    reset();
    updatePose();
    exeMoveStart();
    exeMove();
    exeHit();
    exeStop();
};
