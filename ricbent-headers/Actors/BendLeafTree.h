#pragma once

class BendLeafTree
{
public:
    BendLeafTree(char const*);
    init(al::ActorInitInfo const&);
    initBendInfo();
    initAfterPlacement();
    exeWait();
    movement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
};
