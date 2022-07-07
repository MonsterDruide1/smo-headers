#pragma once

class BossForestBlock
{
public:
    isArgBlockTypeSatellite(al::PlacementInfo const&);
    BossForestBlock(char const*, bool);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryReaction();
    isBreaking() const;
    isStateWait() const;
    startMove();
    endMove();
    goWait();
    updateEmptyModel();
    exeAppear();
    exeWait();
    exeReaction();
    exeMoveStart();
    exeMove();
    exeMoveEnd();
    exeEmpty();
};
