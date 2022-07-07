#pragma once

namespace TimeBalloonDataState { namespace DownloadFindBalloon { 

class State
{
public:
    State(TimeBalloonDataAccessorExecutor*, TimeBalloonDataAccessor*);
    appear();
    exeSearchBalloon();
    exeDownloadAchievementAll();
    ~State();
};

} } 
