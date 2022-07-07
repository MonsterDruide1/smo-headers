#pragma once

namespace al { 

class SeKeeper
{
public:
    create(al::AudioSystemInfo const*, al::SeDirector*, char const*, sead::Vector3<float> const*, sead::Matrix34<float> const*, al::ModelKeeper const*, al::CameraDirector*);
    SeKeeper(al::AudioSystemInfo const*, al::SeDirector*, char const*, sead::Vector3<float> const*, sead::Matrix34<float> const*, al::ModelKeeper const*, al::CameraDirector*);
    tryLoadAddonSoundArchive(al::SeadAudioPlayer*);
    requestPlaySe(char const*, float, char const*, al::SePlayParamList const*, al::MeInfo const*, bool, char const*, sead::Vector3<float> const*);
    tryRequestPlaySe(char const*, float, char const*, al::SePlayParamList const*, al::MeInfo const*, bool, char const*, sead::Vector3<float> const*);
    requestPlaySeIdLocal(al::SeRequestParam*, char const*);
    requestPlayLoopSeSequence(char const*, al::MeInfo const*, int);
    stopSe(char const*, int, bool, char const*);
    tryFindPlayInfo(char const*) const;
    setLifeTimeForHoldCall(char const*, unsigned int, char const*);
    stopAll(int, char const*);
    separatePlayingSePosFromEmitter();
    tryGetCurrentStreamSamplePos(char const*, char const*) const;
    isPlaying(char const*);
    checkIsPlayingSe(char const*, char const*);
    validate();
    invalidate();
    startClipped();
    endClipped();
    appear();
    kill();
    resetPosition();
    setIsInWater(bool);
    getWaterState();
    setIsMaterialWet(bool);
    setIsMaterialPuddle(bool);
    tryUpdateMaterial(char const*);
    setSeSourceVolume(float);
    setSyncParamPtr(float const*, char const*);
    setSyncParamPtrInt(int const*, char const*);
    setEmitterPoseMtxPtr(sead::Matrix34<float> const*, char const*);
    setEmitterPosePosPtr(sead::Vector3<float> const*, char const*);
    loadSe(al::IAudioResourceLoader*);
};

} 
