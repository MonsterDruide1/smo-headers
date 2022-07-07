#pragma once

class RouteGuidePointTransPtr
{
public:
    RouteGuidePointTransPtr(sead::Vector3<float> const*);
    getGuideTrans() const;
};
