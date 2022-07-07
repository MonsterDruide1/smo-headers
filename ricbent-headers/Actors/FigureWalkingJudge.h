#pragma once

class FigureWalkingJudge
{
public:
    FigureWalkingJudge(char const*);
    init(al::ActorInitInfo const&);
    initGuideList(al::ActorInitInfo const&, char const*);
    initAfterPlacement();
    setGroundJudgePointList();
    start();
    appearGuide();
    startResult();
    endResult();
    calcError() const;
    calcScore() const;
    getSuccessScore() const;
    isFinish() const;
    isRetire() const;
    exeWait();
    exePlay();
    isOutRange() const;
    setGuideEraseRate(float);
    exeFinish();
    exeStartResult();
    exeEndResult();
    disappearFootPrint();
    disappearGuide();
    exeRetire();
    getStartPos() const;
    getStartQuat() const;
    setLv(int);
    isLevel(int) const;
};
