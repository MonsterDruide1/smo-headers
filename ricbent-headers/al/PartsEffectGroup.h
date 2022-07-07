#pragma once

namespace al { 

class PartsEffectGroup
{
public:
    PartsEffectGroup();
    init(int, al::EffectSystemInfo const*, char const*, sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Matrix34<float> const*, al::IUseCamera const*);
    getEffect(int) const;
    getEffectNum() const;
    update();
    kill();
};

} 
