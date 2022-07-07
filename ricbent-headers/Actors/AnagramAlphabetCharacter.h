#pragma once

class AnagramAlphabetCharacter
{
public:
    AnagramAlphabetCharacter(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setComplete();
    killCapTarget();
    exeWait();
    exeWaitHack();
    exeWaitHackStart();
    exeHackStart();
    exeHackWait();
    exeHackMove();
    exeHackFall();
    exeHackEnd();
    exeHackGoal();
    exeSet();
    exeComplete();
};
