#pragma once

namespace TimeBalloonDataState { namespace TryCreateAchievementData { 

class State
{
public:
    State(TimeBalloonDataAccessorExecutor*, TimeBalloonDataAccessor*);
    appear();
    setAccessor(al::LiveActor*);
    exeGetDataId();
    exeCreate();
    ~State();
};

} } 
