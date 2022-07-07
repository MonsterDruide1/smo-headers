#pragma once

class TimeBalloonDataHolder
{
public:
    TimeBalloonDataHolder(char const*, TimeBalloonHistoryDataHolder*, TimeBalloonPlayBalloonDataHolder*, al::LiveActor const*);
    tryReadTimeBalloonData(bool, bool);
    writeTimeBalloonDataAll();
    gotBalloon(char const*, char const*);
    tryRateUpBalloon(char const*);
    resetMyData(unsigned long, sead::Vector3<float> const&, int);
    tryReadMyData();
    getData(int);
    isExistMyData() const;
    getMyBalloonStates();
    getMyBalloonId() const;
    resetProtectNumAndSave();
};
