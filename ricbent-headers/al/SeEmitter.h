#pragma once

namespace al { 

class SeEmitter
{
public:
    SeEmitter(al::SeEmitterInfo const*, al::ModelKeeper const*, sead::Vector3<float> const*, sead::Matrix34<float> const*, bool, al::CameraDirector*, al::SeListener const*, al::SeBarrierKeeper const*, al::OcclusionCullingJudge const*, bool);
    getName() const;
    update(bool);
    isCalc3d() const;
    getPosition() const;
    updateBarrieredParam();
    initUpdate();
    resetPosition();
    notifyNewRequest(al::SeRequest const*);
    notifyEndRequest(al::SeRequest const*);
    isUseSpeakerParam() const;
    calcSpeakerParam(al::SpeakerParam*, float*, float*, float*, float*, al::SeResourceInfo const*, sead::Vector3<float> const*, sead::Vector3<float>*, float, bool);
    calcPlayingNum() const;
    isPlaying() const;
    isExistRequest() const;
    moveVolume(float);
    isInvalidClipping() const;
    getShapeDistToListener() const;
    calcDistToListenerFromPos(sead::Vector3<float> const*) const;
    calcDistVolFactor(float, float) const;
    isModeMonophonic() const;
    isModeSurroundStream() const;
    tryGetSpeed() const;
    tryGetRotSpeedFront() const;
    tryGetRotSpeedUp() const;
    isRegisteredRequest(al::SeResourceInfo const*) const;
    changePoseSource(sead::Matrix34<float> const*);
    changePoseSource(sead::Vector3<float> const*);
    getCameraDirector() const;
};

} 
