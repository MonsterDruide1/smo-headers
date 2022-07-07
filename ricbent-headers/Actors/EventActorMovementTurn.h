#pragma once

class EventActorMovementTurn
{
public:
    EventActorMovementTurn(al::LiveActor*, TalkNpcParam const*, TalkNpcActionAnimInfo const*);
    init(al::ActorInitInfo const&);
    appear();
    exeWaitFar();
    exeWaitNear();
    exeTurnToPlayer();
    exeTurnToInitFront();
    exeTurnAfterToPlayer();
    exeTurnSeparate();
    isTurnMovement() const;
    isWaitAtPointMovement() const;
};
