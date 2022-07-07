#pragma once

namespace al { 

class ModelOcclusionQuery
{
public:
    ModelOcclusionQuery();
    ~ModelOcclusionQuery();
    update();
    getZPassCount() const;
    isInside(sead::Vector3<float> const&) const;
    tryCreate(al::LiveActor*, al::Resource*, char const*);
};

} 
