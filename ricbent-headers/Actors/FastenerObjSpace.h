#pragma once

class FastenerObjSpace
{
public:
    FastenerObjSpace(char const*);
    init(al::ActorInitInfo const&);
    appear();
    disappear();
    exeWait();
    exeDisappear();
};
