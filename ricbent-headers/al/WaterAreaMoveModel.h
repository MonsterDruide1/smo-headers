#pragma once

namespace al { 

class WaterAreaMoveModel
{
public:
    WaterAreaMoveModel(char const*);
    init(al::ActorInitInfo const&);
    start();
    appear();
    control();
    exeDelay();
    exeWait();
    exeMove();
    exeStop();
};

} 
