#pragma once

class KuromadoMagicBall
{
public:
    KuromadoMagicBall(char const*);
    init(al::ActorInitInfo const&);
    appear();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
};
