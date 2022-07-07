#pragma once

class BrosEnemyMovePositionUpdater
{
public:
    BrosEnemyMovePositionUpdater(al::ActorInitInfo const&, al::LiveActor*);
    initAfterPlacement();
    update();
    reset();
    nextMovePoint();
    getNextTrans(sead::Vector3<float>*) const;
    isUseConnector() const;
};
