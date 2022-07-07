#pragma once

class BarrierField
{
public:
    BarrierField(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    disappearByShineGet();
    exeAppear();
    exeAppearBreedaMoonWorld();
    exeHide();
    exeDisappear();
};
