#pragma once

namespace al { 

class RailMoveMovement
{
public:
    RailMoveMovement(al::LiveActor*, al::ActorInitInfo const&);
    exeMove();
    ~RailMoveMovement();
};

} 
