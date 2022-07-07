#pragma once

class HosuiTrail
{
public:
    HosuiTrail();
    init(al::ActorInitInfo const&);
    appear();
    disappear();
    setFollowCollisionParts(al::CollisionParts const*);
    exeAppear();
    exeDisappear();
    control();
};
