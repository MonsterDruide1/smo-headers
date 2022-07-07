#pragma once

class FukanKunInteractionBase
{
public:
    FukanKunInteractionBase(int);
    init(FlyObject*, al::ActorInitInfo const&);
    setUp(FlyObject*);
    control(FlyObject*);
};
