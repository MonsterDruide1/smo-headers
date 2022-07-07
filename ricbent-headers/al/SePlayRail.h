#pragma once

namespace al { 

class SePlayRail
{
public:
    SePlayRail(char const*);
    init(al::ActorInitInfo const&);
    appear();
    startFirstStepSe();
    control();
};

} 
