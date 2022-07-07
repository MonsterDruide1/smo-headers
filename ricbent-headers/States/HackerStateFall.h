#pragma once

class HackerStateFall
{
public:
    HackerStateFall(al::LiveActor*, IUsePlayerHack**, char const*);
    appear();
    setupPlayerCollision(IUsePlayerCollision*);
    exeFall();
    ~HackerStateFall();
};
