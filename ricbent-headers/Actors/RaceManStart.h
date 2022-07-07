#pragma once

class RaceManStart
{
public:
    RaceManStart(char const*);
    init(al::ActorInitInfo const&);
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeRaceRank1();
    exeRaceRankCoin();
    exeRaceRankLose();
    exeEventPrize();
    exeEventPrizeCoin();
    exeAppearCoin();
    exeAppearCoinEnd();
    exeEventRetry();
    exeEventLose();
    exeTalk();
    exeEnd();
    exeReaction();
};
