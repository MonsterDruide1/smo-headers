#pragma once

class ShoppingWatcherStateWear
{
public:
    ShoppingWatcherStateWear(ShoppingWatcher*);
    appear();
    exeWait();
    exeAction();
    exeActionForDoshi();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    ~ShoppingWatcherStateWear();
};
