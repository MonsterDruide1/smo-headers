#pragma once

class WorldMapPartsFloat
{
public:
    WorldMapPartsFloat(char const*, sead::Vector3<float> const&, int, float);
    control();
    setLocalMtx(sead::Matrix34<float> const&);
};
