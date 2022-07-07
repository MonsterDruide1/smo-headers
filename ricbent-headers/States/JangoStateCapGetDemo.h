#pragma once

class JangoStateCapGetDemo
{
public:
    JangoStateCapGetDemo(al::LiveActor*, al::ActorInitInfo const&, JangoCap*, int, ParamJangoStateCapGetDemo const*);
    init();
    appear();
    control();
    exeFlyStart();
    exeFlyFlap();
    exeFlyNoFlap();
    exeFlyCapGetSign();
    exeFlyCapGet();
    exeFlyReturnFlap();
    exeFallSign();
    exeRailMoveFallLoop();
    exeFallLoop();
    exeLand();
    exeWait();
    exeReturnPlayerCamera();
    exePlayerCapSearch();
    ~JangoStateCapGetDemo();
};
