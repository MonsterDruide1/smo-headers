#pragma once

class StageSceneStateTimeBalloonSelectBalloonNoLayout
{
public:
    StageSceneStateTimeBalloonSelectBalloonNoLayout(StageScene*, IBalloonFindSearchBalloonHolder*);
    appear();
    getBalloon() const;
    isStartGetBalloon() const;
    isStartSelectLackCoin() const;
    isCancelSelect() const;
    exeWait();
    exeStartGetBalloon();
    exeStartSelectLackCoin();
    exeCancelSelect();
    disappear();
    ~StageSceneStateTimeBalloonSelectBalloonNoLayout();
};
