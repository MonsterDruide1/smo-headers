#pragma once

namespace TimeBalloonDataState { namespace DownloadAllBalloonDataOwn { 

class State
{
public:
    State(TimeBalloonDataAccessorExecutor*, TimeBalloonDataAccessor*);
    appear();
    exeSearchAll();
    exeDownloadBufferQueueAll();
    ~State();
};

} } 
