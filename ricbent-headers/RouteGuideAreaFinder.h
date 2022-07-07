#pragma once

class RouteGuideAreaFinder
{
public:
    RouteGuideAreaFinder();
    reset(sead::Vector3<float>);
    findArea(al::AreaObj const*);
};
