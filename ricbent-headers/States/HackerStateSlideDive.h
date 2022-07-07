#pragma once

class HackerStateSlideDive
{
public:
    HackerStateSlideDive(al::LiveActor*, IUsePlayerHack**);
    appear();
    exeDive();
    turnVelocityNormal(sead::Vector3<float> const&);
    exeSlideGround();
    fixCollidedPosition(sead::Vector3<float> const&);
    updateSlideMove();
    exeSlideWall();
    exeSlideCeiling();
    exeEnd();
    ~HackerStateSlideDive();
};
