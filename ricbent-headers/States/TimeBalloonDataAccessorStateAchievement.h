#pragma once

class TimeBalloonDataAccessorStateAchievement
{
public:
    TimeBalloonDataAccessorStateAchievement(TimeBalloonDataAccessor*);
    exeGet();
    exeCreate();
    exePersistence();
    startGet();
    startCreate();
    getDataId() const;
    ~TimeBalloonDataAccessorStateAchievement();
};
