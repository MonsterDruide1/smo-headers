#pragma once

class EnemyCap
{
public:
    createEnemyCap(char const*);
    EnemyCap(char const*);
    initPartsFixFile(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*);
    makeActorAlive();
    updatePose();
    calcAnim();
    exeWait();
    syncHostVisible();
    exeBlowDown();
    startBlowDown(al::HitSensor const*);
    startBlowDown();
    isBlowDown() const;
    setBlowDownParam(al::EnemyStateBlowDownParam const*);
};
