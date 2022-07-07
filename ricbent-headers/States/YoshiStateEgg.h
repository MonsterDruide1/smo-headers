#pragma once

class YoshiStateEgg
{
public:
    YoshiStateEgg(al::ActorInitInfo const&, al::LiveActor*, IUsePlayerCollision const*, PlayerConst const*, al::WaterSurfaceFinder const*, PlayerModelChangerYoshi*);
    appear();
    kill();
    exeAppear();
    exeWait();
    reactionCollidedCollisionCode();
    ~YoshiStateEgg();
};
