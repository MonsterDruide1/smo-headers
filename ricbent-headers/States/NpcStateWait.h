#pragma once

class NpcStateWait
{
public:
    NpcStateWait(al::LiveActor*, al::ActorInitInfo const&, NpcStateWaitParam const*, NpcStateTurnParam const*, NpcStateRumbleParam const*);
    setWaitAfter();
    setWait();
    appear();
    startWait();
    control();
    invalidateTurn();
    exeWait();
    exeWaitAfter();
    exeTurn();
    startTurnEnd();
    exeTurnEnd();
    exeTrampled();
    ~NpcStateWait();
};
