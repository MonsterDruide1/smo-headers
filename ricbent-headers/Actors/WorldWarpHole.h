#pragma once

class WorldWarpHole
{
public:
    WorldWarpHole(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeCloseWait();
    exeOpenWait();
    exeInvalidStart();
    exeInvalid();
    exeInvalidEnd();
    exeBindStart();
    exeBind();
    exeIn();
    exeInAfter();
    exeOutBefore();
    exeOut();
    exeOutBindRequest();
};
