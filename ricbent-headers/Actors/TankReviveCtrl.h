#pragma once

class TankReviveCtrl
{
public:
    TankReviveCtrl(char const*);
    init(al::ActorInitInfo const&);
    control();
};
