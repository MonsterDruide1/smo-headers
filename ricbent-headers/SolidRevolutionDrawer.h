#pragma once

class SolidRevolutionDrawer
{
public:
    SolidRevolutionDrawer(al::ActorInitInfo const&, unsigned int, unsigned int);
    calc(IUseSolidRevolutionFunc const*, float, float, sead::Color4f const&);
    show();
    hide();
};
