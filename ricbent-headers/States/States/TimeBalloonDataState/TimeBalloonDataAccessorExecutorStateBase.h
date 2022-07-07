#pragma once

namespace TimeBalloonDataState { 

class TimeBalloonDataAccessorExecutorStateBase
{
public:
    TimeBalloonDataAccessorExecutorStateBase(TimeBalloonDataAccessorExecutor*, TimeBalloonDataAccessor*);
    appear();
    errorAndKill();
    errorConnectionAndKill();
    ~TimeBalloonDataAccessorExecutorStateBase();
};

} 
