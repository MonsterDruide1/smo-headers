#pragma once

class ShopBgmPlayer
{
public:
    ShopBgmPlayer(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    movement();
    exeWaitOnSwitch();
    exePlay();
};
