#pragma once

class TaxiStop
{
public:
    TaxiStop(char const*, SphinxRide*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    exeWait();
    exeNoPay();
    exeWarpDemo();
    exePlayerBind();
    exeSphinxNear();
    exeReaction();
    exeWaitMinigame();
    exeReactionMinigame();
    setNerveWaitOrNoPay();
    setNervePlayerBind();
};
