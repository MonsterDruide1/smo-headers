#pragma once

namespace al { 

class BreakModel
{
public:
    BreakModel(al::LiveActor const*, char const*, char const*, char const*, sead::Matrix34<float> const*, char const*);
    init(al::ActorInitInfo const&);
    appear();
    exeWait();
    exeBreak();
};

} 
