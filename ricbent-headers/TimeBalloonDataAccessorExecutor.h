#pragma once

class TimeBalloonDataAccessorExecutor
{
public:
    TimeBalloonDataAccessorExecutor(TimeBalloonDataAccessor*);
    update();
    setAccessor(al::LiveActor*);
    addHioNode();
    reset();
    exeWait();
    exeError();
    exeDownloadAllBalloonDataOwn();
    exeTryCreateAchievementData();
    exeUpdatePutBalloonOwn();
    exeDownloadFindBalloon();
    exeUpdateGetBalloonTutorial();
    exeUpdateGetBalloon();
    exeUpdateRateUpBalloon();
    exeUpdateGotProtectBonus();
    requestDownloadAllBalloonDataOwn();
    isEnableRequest() const;
    requestUpdatePutBalloonOwn(int, sead::Vector3<float> const&);
    tryGetBalloonDataOwnCurrentWorld() const;
    requestDownloadFindBalloon();
    requestUpdateGetBalloon(unsigned long, unsigned long, unsigned long, int, int);
    requestUpdateGetBalloonTutorial();
    requestUpdateRateUp(unsigned long, unsigned long, unsigned long, bool);
    requestUpdateGotProtectBonus();
    requestTryCreateAchievementData();
    isConnected() const;
    isEnd() const;
    isError() const;
    isExistBalloonDataOwnCurrentWorld() const;
    isExistBalloonDataOwnCurrentWorldAndNotGot() const;
    calcProtectNumAllWorld() const;
    isEnableFindBalloonCurrentWorld() const;
    getPrincipalID();
    ~TimeBalloonDataAccessorExecutor();
};
