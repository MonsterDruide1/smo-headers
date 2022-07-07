#pragma once

namespace al { 

class ScreenPointDirector
{
public:
    ScreenPointDirector();
    registerTarget(al::ScreenPointTarget*);
    setCheckGroup(al::ScreenPointTarget*);
    hitCheckSegment(al::ScreenPointer*, sead::ObjArray<al::ScreenPointTargetHitInfo>*, int, sead::Vector3<float> const&, sead::Vector3<float> const&);
    hitCheckScreenCircle(al::ScreenPointer*, sead::ObjArray<al::ScreenPointTargetHitInfo>*, int, sead::Vector2<float> const&, float, float);
    hitCheckLayoutCircle(al::ScreenPointer*, sead::ObjArray<al::ScreenPointTargetHitInfo>*, int, sead::Vector2<float> const&, float, float, int (*)(al::ScreenPointTargetHitInfo const*, al::ScreenPointTargetHitInfo const*));
};

} 
