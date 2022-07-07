#pragma once

namespace al { 

class ScreenPointer
{
public:
    ScreenPointer(al::ActorInitInfo const&, char const*);
    hitCheckSegment(sead::Vector3<float> const&, sead::Vector3<float> const&);
    hitCheckScreenCircle(sead::Vector2<float> const&, float, float);
    hitCheckLayoutCircle(sead::Vector2<float> const&, float, float, int (*)(al::ScreenPointTargetHitInfo const*, al::ScreenPointTargetHitInfo const*));
    recheckAndSortSegment(sead::Vector3<float> const&, sead::Vector3<float> const&);
    getHitTarget(int) const;
    isHitTarget(al::ScreenPointTarget const*) const;
};

} 
