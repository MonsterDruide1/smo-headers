#pragma once

class BlockStateSingleItem
{
public:
    BlockStateSingleItem(al::LiveActor*, int, bool);
    init();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isReaction() const;
    isEnableAppearItem() const;
    setItemOffsetY(float);
    autoGet(al::HitSensor*);
    exeWait();
    exeReaction();
    exeReactionHipDrop();
    ~BlockStateSingleItem();
};
