#pragma once

class MarchingCubeBlockParts
{
public:
    MarchingCubeBlockParts(char const*, char const*, sead::Vector2<float> const&);
    init(al::ActorInitInfo const&);
    updateAnim();
    movement();
};
