#pragma once

class PlayerAreaChecker
{
public:
    PlayerAreaChecker(al::LiveActor const*, PlayerModelHolder const*);
    isInWater(sead::Vector3<float> const&) const;
    isInWaterDouble(sead::Vector3<float> const&, float) const;
    isInWaterWallCatch(sead::Vector3<float> const&, float) const;
    isInWaterIce(sead::Vector3<float> const&) const;
    isInWaterIceDouble(sead::Vector3<float> const&, float) const;
    isInWet(sead::Vector3<float> const&) const;
    isInRise(sead::Vector3<float> const&) const;
    isInHackCancel(sead::Vector3<float> const&) const;
    isInRecovery(al::AreaObj const**, sead::Vector3<float> const&) const;
    isInRecoveryBan(sead::Vector3<float> const&) const;
    isInWallClimbBan(sead::Vector3<float> const&) const;
    isInForceRecovery(sead::Vector3<float>*, sead::Vector3<float>*, al::AreaObj const**, sead::Vector3<float> const&) const;
    isInShadowLength(float*, sead::Vector3<float> const&) const;
    isInCarryBan(sead::Vector3<float> const&) const;
    tryFindStainArea(sead::Vector3<float> const&) const;
    tryFindInvalidateInputFall(sead::Vector3<float> const&) const;
};
