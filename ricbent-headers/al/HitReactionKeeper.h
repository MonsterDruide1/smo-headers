#pragma once

namespace al { 

class HitReactionKeeper
{
public:
    tryCreate(char const*, sead::Vector3<float> const*, al::IUseEffectKeeper*, al::IUseAudioKeeper const*, al::IUseCamera const*, al::PadRumbleDirector*, al::SceneStopCtrl*, al::RadialBlurDirector*, al::PlayerHolder const*, al::Resource const*, char const*);
    start(char const*, sead::Vector3<float> const*, al::HitSensor const*, al::HitSensor const*);
    tryFindReactionInfo(char const*);
    HitReactionKeeper(char const*, sead::Vector3<float> const*, al::IUseEffectKeeper*, al::IUseAudioKeeper const*, al::IUseCamera const*, al::PadRumbleDirector*, al::SceneStopCtrl*, al::RadialBlurDirector*, al::PlayerHolder const*, al::Resource const*, char const*);
    tryFindReactionInfo(char const*) const;
};

} 
