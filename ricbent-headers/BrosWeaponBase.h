#pragma once

class BrosWeaponBase
{
public:
    BrosWeaponBase(char const*, al::LiveActor const*);
    attach(sead::Matrix34<float> const*, sead::Vector3<float> const&, sead::Vector3<float> const&, char const*);
    calcAttachMtx(sead::Matrix34<float>*, sead::Matrix34<float> const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    getBreakStep() const;
    isBreak() const;
};
