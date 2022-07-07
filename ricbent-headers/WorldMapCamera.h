#pragma once

class WorldMapCamera
{
public:
    WorldMapCamera(al::LiveActor*, al::ActorInitInfo const&);
    control();
    appear();
    kill();
    end();
    exeWait();
    exeInterpolate();
    exeEnd();
    startCameraInterpolate(al::LiveActor const*, float, float, sead::Vector3<float> const&, int, bool);
    isCameraInterpolate() const;
    evaluateUnit(float) const;
    ~WorldMapCamera();
};
