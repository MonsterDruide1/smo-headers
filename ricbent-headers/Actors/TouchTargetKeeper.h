#pragma once

class TouchTargetKeeper
{
public:
    TouchTargetKeeper(al::HitSensor*, int);
    init(al::ActorInitInfo const&);
    update();
    tryGetLastHoldTouchTarget(TouchTargetInfo*) const;
    tryGetLastDecideTouchTarget(TouchTargetInfo*) const;
    storeTouchTarget();
    freeTouchTarget();
    clearTouchTarget();
    isStoreFull() const;
    getStoreTouchTargetNum() const;
    getStoreTouchTargetInfo(int);
    getCollisionDirector() const;
};
