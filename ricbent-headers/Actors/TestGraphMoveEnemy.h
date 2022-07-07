#pragma once

class TestGraphMoveEnemy
{
public:
    TestGraphMoveEnemy(char const*, al::Graph const*);
    init(al::ActorInitInfo const&);
    control();
    exeMove();
    exeMoveEnd();
    exeReaction();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
