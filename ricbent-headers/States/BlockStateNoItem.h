#pragma once

class BlockStateNoItem
{
public:
    BlockStateNoItem(al::LiveActor*);
    init();
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    doReaction();
    isReaction() const;
    exeWait();
    exeReaction();
    ~BlockStateNoItem();
};
