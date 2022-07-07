#pragma once

class StateMapPartsForceReset
{
public:
    StateMapPartsForceReset(al::LiveActor*, al::ActorInitInfo const&);
    appear();
    isEnableForceReset() const;
    exeReset();
    exeResetEnd();
    ~StateMapPartsForceReset();
};
