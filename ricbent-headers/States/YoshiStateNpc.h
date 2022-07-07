#pragma once

class YoshiStateNpc
{
public:
    YoshiStateNpc(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerTrigger const*, al::WaterSurfaceFinder const*, al::ActorInitInfo const&, PlayerAnimator*, al::EventFlowExecutor*);
    appear();
    control();
    exeAppear();
    exeWait();
    exeTurn();
    exeReaction();
    exeHackEnd();
    tryGetLookAtPlayerPos(sead::Vector3<float>*) const;
    reactionCollidedCollisionCode();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgReturnEggAndInitPosition(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    ~YoshiStateNpc();
};
