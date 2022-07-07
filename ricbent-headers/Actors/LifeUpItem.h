#pragma once

class LifeUpItem
{
public:
    LifeUpItem(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    appearPopUp();
    appearPopUpBack();
    appearPopUpAbove();
    appearSlot();
    appearInvalidClipping();
    appearAmiiboTouch();
    get();
    exePopUp();
    exeLand();
    exeWait();
    exeTakeWater();
    exeLandWater();
    exeFloatWater();
    exeGet();
    exeAutoGetDemo();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
