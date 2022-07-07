#pragma once

namespace al { 

class ThunderRenderRequester
{
public:
    ThunderRenderRequester(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
};

} 
