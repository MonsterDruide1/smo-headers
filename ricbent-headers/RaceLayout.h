#pragma once

class RaceLayout
{
public:
    RaceLayout(al::LiveActor*, al::RaceJudgeDirector*, al::LayoutInitInfo const&, char const*, int, char const*, char const*);
    appear();
    kill();
    setPlayerRacerActor(al::LiveActor*);
    startCountDown();
    isEndCountDown() const;
    startRace();
    countupLap(int);
    updateRank(int, int);
    endRace();
    cancelRace();
    isEndRaceFinish() const;
    startResult();
    isEndResult() const;
    calcTotalFrame() const;
    calcTotalTimeCsec() const;
    exeAppear();
    exeWait();
    exeWaitCountDown();
    exeCountDown();
    exeRace();
    exeRaceFinish();
    exeMiniGameEnd();
    exeResultAppear();
    exeResultDecideButtonAppear();
    exeResultWait();
    exeResultEnd();
    exeCancelRace();
    exeResultEndEnd();
};
