#pragma once

namespace al { 

class PartsEffect
{
public:
    PartsEffect();
    init(al::EffectSystemInfo const*, char const*, sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Matrix34<float> const*, al::IUseCamera const*);
    update();
    kill();
    getEffectKeeper() const;
};

} 
