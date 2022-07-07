#pragma once

class HipDropTransformMapParts
{
public:
    HipDropTransformMapParts(al::LiveActor*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isHipDropMarkArea(al::HitSensor const*) const;
    tryUpdateConnector();
    tryTransform();
    tryReverse();
    exeWaitInit();
    exeMoveTransform();
    exeWaitTransform();
    exeMoveReverse();
};
