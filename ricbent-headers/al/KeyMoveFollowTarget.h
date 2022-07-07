#pragma once

namespace al { 

class KeyMoveFollowTarget
{
public:
    KeyMoveFollowTarget(char const*);
    initKeyMoveFollowTarget(al::ActorInitInfo const&, char const*, char const*);
    exeWait();
    exeMove();
    exeStop();
    init(al::ActorInitInfo const&);
};

} 
