#pragma once

class SimpleDemoState
{
public:
    SimpleDemoState(al::LiveActor*, al::ActorInitInfo const&, char const*, sead::Matrix34<float> const*);
    appear();
    exeDemo();
    tryStartDemo();
    tryEndDemo();
    requestStartDemo();
    requestEndDemo();
    startDemoProc();
    endDemoProc();
    ~SimpleDemoState();
    endDemoProcBeforeRequest();
};
