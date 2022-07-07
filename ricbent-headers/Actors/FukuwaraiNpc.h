#pragma once

class FukuwaraiNpc
{
public:
    FukuwaraiNpc(char const*, FukuwaraiWatcher*, al::LiveActor*, bool);
    init(al::ActorInitInfo const&);
    getNextLv() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    exeReaction();
    exeWait();
    exeMemorize();
    exeEventMemorize();
    exePlay();
    startResultWipe();
    exeEventStartResult();
    exeEventStartResultEnd();
    startResult(int);
    isCompleteKuriboMario() const;
    startEndResult();
    reset();
    exeEventResult();
    exeEventEnd();
    isEventStartResultEnd() const;
    isEventResultJudgeEnd() const;
    isMemorize() const;
    isSetStartPosition() const;
    isPlay() const;
    isWaitStartResult() const;
    isEnd() const;
};
