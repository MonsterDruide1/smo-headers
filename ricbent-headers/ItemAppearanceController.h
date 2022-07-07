#pragma once

class ItemAppearanceController
{
public:
    ItemAppearanceController(al::LiveActor*, int);
    requestAppear(al::SensorMsg const*, al::HitSensor const*);
    exeCount();
    exeAppear();
    ~ItemAppearanceController();
};
