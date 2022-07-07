#pragma once

class RhythmSpotlight
{
public:
    RhythmSpotlight(char const*);
    init(al::ActorInitInfo const&);
    readLightPatternData(int);
    setLightIntensity(float);
    control();
    setLightColor(sead::Vector3<float> const&);
    setLightColorRedComponent(float);
    setLightColorGreenComponent(float);
    setLightColorBlueComponent(float);
    setLightOn();
    setFadeOutStart(float);
    setLightOff();
    setActionRotate();
    setLightXZAperture(float);
    setLightBeamRadius(float);
    setLightYReach(float);
    setLightTiltX(float);
    exeRotating();
    setActionFrameRate(float);
    exeOff();
    setHoldActionAtFrame(float);
    toggleRotationSense();
    setLightTilt(sead::Vector3<float> const&);
    setLightTiltY(float);
    setLightTiltZ(float);
};
