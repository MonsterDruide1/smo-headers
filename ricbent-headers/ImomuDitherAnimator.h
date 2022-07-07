#pragma once

class ImomuDitherAnimator
{
public:
    ImomuDitherAnimator(al::LiveActor*, sead::Matrix34<float> const*, sead::Matrix34<float> const*);
    update();
    ~ImomuDitherAnimator();
};
