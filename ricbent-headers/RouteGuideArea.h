#pragma once

class RouteGuideArea
{
public:
    RouteGuideArea(char const*);
    init(al::AreaInitInfo const&);
    calcGuidePos(sead::Vector3<float>*) const;
};
