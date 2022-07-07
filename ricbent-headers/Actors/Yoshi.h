#pragma once

class Yoshi
{
public:
    Yoshi(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    movement();
    control();
    updateCollider();
    updateCollisionShape();
    sendCollisionMsg();
    appearEgg();
    startFruitShineGetDemo();
    exeEgg();
    exeNpc();
    exeHack();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
