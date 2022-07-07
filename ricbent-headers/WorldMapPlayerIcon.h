#pragma once

class WorldMapPlayerIcon
{
public:
    create(char const*, al::ActorInitInfo const&, sead::Matrix34<float> const*);
    WorldMapPlayerIcon(char const*);
    movement();
    calcAnim();
};
