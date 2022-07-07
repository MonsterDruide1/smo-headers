#pragma once

class Rabbit
{
public:
    Rabbit(char const*, al::Graph const*, bool);
    init(al::ActorInitInfo const&);
    initItem(int, int, al::ActorInitInfo const&);
    appearReset();
    control();
    endClipped();
    resetParam();
    kill();
    setNerveJumpOrMove(al::LiveActor*, RabbitGraphVertex const*, RabbitGraphVertex const*, bool);
    setNerveJumpOrMoveStart(al::LiveActor*, RabbitGraphVertex const*, RabbitGraphVertex const*);
    onMoveEndUpdateCurrentVertexAndNextNerve();
    tryFindNextVertex();
    exeReset();
    exeStandby();
    exeFind();
    exeWait();
    exeProvoke();
    reduceStamina();
    exeEndTired();
    exeMove();
    trySetPoseGraphMoveDir(float);
    getMoveSpeed() const;
    onMoveEnd();
    exeBreak();
    exeTurn();
    exeTurnReverse();
    exeMoveStart();
    exeJumpPath();
    exeEndJump();
    exeCatch();
    exeGiveMoon();
    exeGiveItem();
    exeDisappear();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
