#pragma once

namespace al { 

class SeShape
{
public:
    SeShape(al::SeShapePose*, al::SeShapeInfo const*);
    update(al::IAudioListener const*, bool, bool);
    calcDistToListenerFromPos(sead::Vector3<float> const*, al::IAudioListener const*) const;
    calcSpeakerParam(al::SpeakerParam*, float*, float*, float*, float*, al::IAudioListener const*, bool, sead::Vector3<float>*, al::SeResourceInfo const*, bool);
    calcSpeakerParamFromPoint(al::SpeakerParam*, float*, float*, float*, float*, al::IAudioListener const*, bool, sead::Vector3<float> const*, float, sead::Vector3<float>*, al::SeResourceInfo const*, bool);
    calcSpeakerParamWithDirectPos(al::SpeakerParam*, float*, float*, float*, float*, al::IAudioListener const*, bool, sead::Vector3<float> const*, sead::Vector3<float>*, float, al::SeResourceInfo const*, bool);
    calcDistVolFactor(float, float) const;
    getRootPos() const;
    resetPosition(al::IAudioListener const*);
    tryGetSpeed() const;
    tryGetRotSpeedFront() const;
    tryGetRotSpeedUp() const;
    changePoseSource(sead::Matrix34<float> const*);
    changePoseSource(sead::Vector3<float> const*);
    getCameraDirector() const;
    ~SeShape();
    setPositionRandom(al::IAudioListener const*, float, float, bool);
};

} 
