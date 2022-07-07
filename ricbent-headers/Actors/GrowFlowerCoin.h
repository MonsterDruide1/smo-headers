#pragma once

class GrowFlowerCoin
{
public:
    GrowFlowerCoin(char const*);
    init(al::ActorInitInfo const&);
    calcLevel(int);
    setGrowLevel();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableCoinReaction() const;
    isEnableReaction() const;
    control();
    startClipped();
    endClipped();
    exeWait();
    startActionAllLeaf(char const*);
    exeGrow();
    updateGrowLevel();
    exeReaction();
    exeCoinReaction();
    exeAppearMoon();
};
