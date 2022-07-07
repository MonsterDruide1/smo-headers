#pragma once

class CollisionAnimCtrl
{
public:
    CollisionAnimCtrl(al::LiveActor const*, al::ActorInitInfo const&, char const**, int);
    startBreak(char const*);
    killAll();
};
