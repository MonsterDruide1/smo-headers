#pragma once

class TreasureBox
{
public:
    TreasureBox(char const*);
    init(al::ActorInitInfo const&);
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    changeOpenCollision();
    setupOpenNerve();
    exeWait();
    exeTrampleReaction();
    exeOpen();
    exeBounce();
    exeSenobiBounce();
    exeOpenWait();
    exeOpenTouchReaction();
    exeOpenReaction();
};
