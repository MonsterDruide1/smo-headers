#pragma once

class DokanPuppetController
{
public:
    DokanPuppetController(al::LiveActor*);
    judgeMsgBindStart(al::HitSensor*, al::HitSensor*, al::LiveActor const*, DokanInfo const*);
    startBind(al::HitSensor*, al::HitSensor*, al::LiveActor const*, al::LiveActor const*, DokanInfo const*, DokanInfo const*, bool, bool);
    warp();
    calcMoveMtxUp();
    calcMoveMtxSide();
    calcMoveMtxUpsideDown();
    out();
    cancelBind();
    exeWait();
    exeMoveIn();
    exeIn();
    exeDirectIn();
    exeOut();
    exeOnlyWarp();
    ~DokanPuppetController();
};
