#pragma once

class GuidePosInfoHolder
{
public:
    GuidePosInfoHolder();
    calcGuidePos(sead::Vector3<float>*, al::LiveActor const*) const;
    setForceGuidePosPtr(sead::Vector3<float> const*);
    resetForceGuidePosPtr();
    getSceneObjName() const;
    ~GuidePosInfoHolder();
};
