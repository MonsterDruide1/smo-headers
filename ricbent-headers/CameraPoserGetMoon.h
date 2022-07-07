#pragma once

class CameraPoserGetMoon
{
public:
    CameraPoserGetMoon(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::LookAtCamera*, al::LiveActor const*);
    init();
    start(al::CameraStartInfo const&);
    checkCollision(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    verifyWall();
    verifyWallOneDirection(sead::Vector3<float> const&);
};
