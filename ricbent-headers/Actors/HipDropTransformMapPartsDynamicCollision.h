#pragma once

class HipDropTransformMapPartsDynamicCollision
{
public:
    HipDropTransformMapPartsDynamicCollision(al::LiveActor*);
    init(al::ActorInitInfo const&);
    tryUpdateDynamicCollision();
    calcAnim();
    tryTransform();
    tryReverse();
    exeWaitInit();
    exeMoveTransform();
    exeWaitTransform();
    exeMoveReverse();
};
