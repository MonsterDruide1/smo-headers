#pragma once

class BossMagmaBreathEyeSensor
{
public:
    BossMagmaBreathEyeSensor(al::LiveActor*, unsigned int);
    start();
    updateEyeSensor();
    checkAttack(al::HitSensor*, al::HitSensor*);
    update();
};
