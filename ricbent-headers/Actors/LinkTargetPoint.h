#pragma once

class LinkTargetPoint
{
public:
    LinkTargetPoint();
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    calcTargetCenterPos(sead::Vector3<float>*) const;
    receiveMsgInitTouchTargetInfo(al::SensorMsg const*);
};
