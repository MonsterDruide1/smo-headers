#pragma once

namespace al { 

class KeyMoveMovement
{
public:
    KeyMoveMovement(al::LiveActor*, al::ActorInitInfo const&);
    exeWait();
    exeMove();
    exeStop();
    ~KeyMoveMovement();
};

} 
