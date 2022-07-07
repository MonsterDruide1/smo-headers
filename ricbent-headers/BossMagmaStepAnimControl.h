#pragma once

class BossMagmaStepAnimControl
{
public:
    BossMagmaStepAnimControl(al::LiveActor*);
    requestUp();
    requestDown();
    requestDownImm();
    exeWait();
    exeUp();
    exeDownSign();
    exeDown();
    ~BossMagmaStepAnimControl();
};
