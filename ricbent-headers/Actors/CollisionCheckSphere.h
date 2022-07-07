#pragma once

class CollisionCheckSphere
{
public:
    CollisionCheckSphere(char const*);
    init(al::ActorInitInfo const&);
    control();
};
