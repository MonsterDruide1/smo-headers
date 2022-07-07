#pragma once

class CameraPoserKoopaFireBeamStart
{
public:
    CameraPoserKoopaFireBeamStart(char const*);
    init();
    prepareStart(sead::Vector3<float> const&, sead::Vector3<float> const&);
    start(al::CameraStartInfo const&);
    exeWait();
};
