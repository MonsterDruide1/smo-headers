#pragma once

class CapTargetInfo
{
public:
    CapTargetInfo();
    init(al::LiveActor const*, char const*);
    setFollowLockOnMtx(char const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    setLockOnStartAnimName(char const*);
    setLockOnAnimName(char const*);
    setHackName(char const*);
    makeLockOnMtx(sead::Matrix34<float>*) const;
    calcLockOnFollowTargetScale(sead::Vector3<float>*) const;
};
