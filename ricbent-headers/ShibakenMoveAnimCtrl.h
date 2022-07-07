#pragma once

class ShibakenMoveAnimCtrl
{
public:
    ShibakenMoveAnimCtrl(al::LiveActor*, float const&, float const&, float const&);
    update();
    startWalkSniff();
    endWalkSniff();
    exeMove();
    exeWalkSniffStart();
    exeWalkSniff();
    exeWalkSniffEnd();
    ~ShibakenMoveAnimCtrl();
};
