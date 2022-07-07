#pragma once

class LapRecorder
{
public:
    LapRecorder(char const*, int, bool);
    init(al::ActorInitInfo const&);
    control();
    isThroughStart(int) const;
    isLastLap(int) const;
    isGoal(int) const;
    isClearLapTime(int, unsigned long) const;
    startWatch();
    exeWait();
    exeWatch();
    updatePlayerLapInfo(int);
};
