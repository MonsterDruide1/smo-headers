#pragma once

namespace al { 

class SeEmitterHolder
{
public:
    SeEmitterHolder(sead::SafeStringBase<char> const&, al::AudioInfoListWithParts<al::SeEmitterInfo> const*, al::ModelKeeper const*, sead::Vector3<float> const*, sead::Matrix34<float> const*, bool, al::CameraDirector*, al::SeListener const*, al::SeBarrierKeeper const*, al::OcclusionCullingJudge const*, bool);
    findEmitter(char const*) const;
    getEmitter(int) const;
    resetPosition();
    calcPlayingNum() const;
};

} 
