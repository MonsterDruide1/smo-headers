#pragma once

class WorldMapKoopaShip
{
public:
    create(char const*, al::ActorInitInfo const&, sead::Matrix34<float> const*);
    WorldMapKoopaShip(char const*);
    control();
};
