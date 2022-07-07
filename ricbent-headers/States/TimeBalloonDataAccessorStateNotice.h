#pragma once

class TimeBalloonDataAccessorStateNotice
{
public:
    TimeBalloonDataAccessorStateNotice(TimeBalloonDataAccessor*, GameDataHolderAccessor);
    exeCreate();
    exeDelete();
    exeGot();
    exePlayed();
    startCreate();
    settingCreate(int);
    startDelete();
    settingDelete(unsigned long);
    startGot();
    settingGot(unsigned long, unsigned long);
    startPlayed();
    settingPlayed(unsigned long, unsigned long);
    ~TimeBalloonDataAccessorStateNotice();
};
