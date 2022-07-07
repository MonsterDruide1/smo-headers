#pragma once

class BossForestBarrierCtrl
{
public:
    BossForestBarrierCtrl(al::LiveActor*);
    appear();
    doBreak();
    doWait();
    getBarrierModel() const;
    isAppeared() const;
    exeHidden();
    exeAppear();
    exeWait();
    exeBreak();
    ~BossForestBarrierCtrl();
};
