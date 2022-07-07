#pragma once

class BlockStateTenCoin
{
public:
    BlockStateTenCoin(al::LiveActor*, bool);
    init();
    control();
    autoGet(al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isReaction() const;
    isEnableAppearItem() const;
    exeWait();
    exeReaction();
    exeReactionHipDrop();
    exeGetAuto();
    ~BlockStateTenCoin();
};
