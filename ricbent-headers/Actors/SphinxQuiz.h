#pragma once

class SphinxQuiz
{
public:
    SphinxQuiz(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    exeWait();
    exeKeyWait();
    exeKeyMove();
    exeWaitMiniGame();
};
