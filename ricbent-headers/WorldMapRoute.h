#pragma once

class WorldMapRoute
{
public:
    create(char const*, char const*, al::ActorInitInfo const&, sead::Matrix34<float> const*, float);
    WorldMapRoute(char const*);
    calcPose(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, bool, bool, bool, bool);
    appear();
    kill();
    movement();
    calcAnim();
    openRoute(int);
    exeWait();
    exeOpen();
};
