#pragma once

class ElectricWirePole
{
public:
    ElectricWirePole(char const*);
    init(al::ActorInitInfo const&);
    isExistSelfCollisionBeneath(sead::Vector3<float>*, al::LiveActor const*, sead::Vector3<float> const&, float, float);
    initAfterPlacement();
    kill();
    appear();
};
