#pragma once

class FireHydrant
{
public:
    FireHydrant(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeSquirtStart();
    exeSquirtLoop();
    exeSquirtStop();
    exeForbidSquirt();
};
