#pragma once

class LifeMaxUpItem
{
public:
    LifeMaxUpItem(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    appear();
    appearAmiiboTouch(sead::Vector3<float> const&);
    appearPopUp();
    appearPopUpAbove();
    appearSlot();
    appearPopUpDir(sead::Quat<float> const&);
    exeAppeared();
    exeStayPlacedPos();
    exeWaterFallWorld();
    exeAutoGetDemo();
    exeGotWaitLifeUpDemo();
    exeGotAppearCoin();
    exeGotDeadWait();
};
