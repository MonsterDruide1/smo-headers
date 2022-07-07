#pragma once

namespace al { 

class ParabolicPath
{
public:
    ParabolicPath();
    initFromUpVector(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    initFromUpVector(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    initFromMaxHeight(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    initFromUpVectorAddHeight(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    getLength(float, float, int) const;
    getTotalLength(int) const;
    calcPositionHV(sead::Vector3<float>*, float, float) const;
    calcPosition(sead::Vector3<float>*, float) const;
    calcPositionEaseOutH(sead::Vector3<float>*, float) const;
    calcDirection(sead::Vector3<float>*, float, float) const;
    calcPathSpeedFromGravityAccel(float) const;
    calcPathSpeedFromAverageSpeed(float) const;
    calcPathSpeedFromHorizontalSpeed(float) const;
    calcPathTimeFromGravityAccel(float) const;
    calcPathTimeFromAverageSpeed(float) const;
    calcPathTimeFromHorizontalSpeed(float) const;
};

} 
