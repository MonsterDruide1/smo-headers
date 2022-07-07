#pragma once

class PlayerHitPush
{
public:
    PlayerHitPush(al::LiveActor const*, PlayerConst const*);
    clearHitFlag();
    setHitPush(sead::Vector3<float> const&);
    setHitInfo(sead::Vector3<float> const&, float, float);
    setHitPushStrong(sead::Vector3<float> const&);
    setHitPushVeryStrong(sead::Vector3<float> const&);
    setHitPushBlowDown(sead::Vector3<float> const&);
};
