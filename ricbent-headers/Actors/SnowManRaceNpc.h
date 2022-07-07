#pragma once

class SnowManRaceNpc
{
public:
    SnowManRaceNpc(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    setHackKeepTalkDemo();
    control();
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitNoPlayerHack();
    updateRandomAction();
    exeWaitPlayerHack();
    exeReaction();
    exeRaceResultWin();
    exeRaceResultWinWait();
    exeRaceResultFirst();
    exeRaceResultSecond();
    exeRaceResultThird();
    exeGetPrize();
    exeGetPrizeEnd();
    exeRaceResultLose();
    exeRaceResultCancel();
};
