#pragma once

class TouchActionMessageDirector
{
public:
    TouchActionMessageDirector();
    init(al::ActorInitInfo const&);
    update();
    isTouchHold() const;
    getRotateSpeedDegree() const;
    tryGetMoveVec(sead::Vector2<float>*) const;
    tryGetSlideDir(sead::Vector2<float>*) const;
    getSceneObjName() const;
    ~TouchActionMessageDirector();
    getCollisionDirector() const;
};
