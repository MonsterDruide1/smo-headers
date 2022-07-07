#pragma once

class FukanKunMessageHolder
{
public:
    FukanKunMessageHolder();
    init(FlyObject*, al::ActorInitInfo const&);
    interact(FlyObject*);
    getMessageSystem() const;
};
