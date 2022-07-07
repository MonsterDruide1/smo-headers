#pragma once

namespace TimeBalloonDataState { namespace UpdatePutBalloonOwn { 

class State
{
public:
    State(TimeBalloonDataAccessorExecutor*, TimeBalloonDataAccessor*);
    appear();
    setAccessor(al::LiveActor*);
    setting(TimeBalloon::BalloonDataServer*, unsigned long, unsigned long);
    exeDeleteNotice();
    exeCreateNotice();
    exeCreateBalloon();
    ~State();
};

} } 
