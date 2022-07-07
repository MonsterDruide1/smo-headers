#pragma once

class StageSceneStateTimeBalloonSelectBalloon
{
public:
    StageSceneStateTimeBalloonSelectBalloon(StageScene*, IBalloonFindSearchBalloonHolder*, al::ActorInitInfo const&, IUseTimeBalloonPlayObjects*, IUseTimeBalloonPlayLayout*, IUseTimeBalloonConst*);
    appear();
    changePage(int);
    getBalloon() const;
    isStartGetBalloon() const;
    isStartSelectLackCoin() const;
    isCancelSelect() const;
    disappear();
    exeStartGetBalloon();
    exeStartSelectLackCoin();
    exeCancelSelect();
    exeSelect();
    decideBalloon(int);
    exeWaitPageSetup();
    refleshSelectParts();
    exeDecideStart();
    exeCancelStart();
    exeChangePage();
    isSelectedOrCanceled() const;
    ~StageSceneStateTimeBalloonSelectBalloon();
};
