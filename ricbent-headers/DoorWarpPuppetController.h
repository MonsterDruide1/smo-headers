#pragma once

class DoorWarpPuppetController
{
public:
    DoorWarpPuppetController();
    judgeMsgBindStart(al::HitSensor*, al::HitSensor*);
    startBind(al::HitSensor*, al::HitSensor*, al::LiveActor const*);
    startBindStageStart(al::HitSensor*, al::HitSensor*, al::LiveActor const*, bool);
    warp();
    cancelBind();
    update();
    out();
    puppetTransfer(DoorWarpPuppetController*);
    calcDoorOutTrans(sead::Vector3<float>*, al::LiveActor const*);
    isFinishedMove() const;
    exeWait();
    exeMoveToFront();
    exeIn();
    exeOut();
    exeOnlyWarp();
    ~DoorWarpPuppetController();
};
