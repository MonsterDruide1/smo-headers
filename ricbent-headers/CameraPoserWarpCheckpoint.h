#pragma once

class CameraPoserWarpCheckpoint
{
public:
    CameraPoserWarpCheckpoint(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, al::LiveActor const*);
    init();
    start(al::CameraStartInfo const&);
    calcPushLength(sead::Vector3<float> const&) const;
    update();
};
