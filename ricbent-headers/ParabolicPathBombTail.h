#pragma once

class ParabolicPathBombTail
{
public:
    ParabolicPathBombTail();
    setBaseParam(float, float, float);
    initFromUpVectorAddHeight(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float);
    update(sead::Vector3<float>*, float, float);
    calcPathTimeFromHorizontalSpeed(float);
    calcPosition(sead::Vector3<float>*, float);
};
