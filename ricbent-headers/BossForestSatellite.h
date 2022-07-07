#pragma once

class BossForestSatellite
{
public:
    BossForestSatellite(char const*, BossForest*);
    initialize(al::ActorInitInfo const&, al::PlacementInfo const&);
    updateBlocksPos(bool);
    appear();
    getLifePartsActor() const;
    kill();
    makeActorDead();
    updateLinePose();
    countBlocks() const;
    isAppeared() const;
    isDead() const;
    isUsePhase(int) const;
    setLifePartsName(char const*);
    appearDemo();
    appearFirst();
    exeAppear();
    exeDemo();
    exeWait();
    exeBreak();
    exeDie();
};
