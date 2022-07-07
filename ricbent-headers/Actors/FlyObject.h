#pragma once

class FlyObject
{
public:
    FlyObject(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    getMessageSystem() const;
    exeFly();
    exeDisappear();
};
