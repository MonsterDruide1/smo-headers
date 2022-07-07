#pragma once

class WorldMapParts
{
public:
    create(char const*, char const*, al::ActorInitInfo const&, sead::Matrix34<float> const*, sead::Matrix34<float> const&, char const*);
    WorldMapParts(char const*);
    initParts(WorldMapParts*, char const*, al::ActorInitInfo const&, sead::Matrix34<float> const*, sead::Matrix34<float> const&, char const*);
    setWorldMtx(sead::Matrix34<float> const&);
    updatePose();
    control();
    setLocalMtx(sead::Matrix34<float> const&);
};
