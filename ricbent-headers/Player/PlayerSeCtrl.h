#pragma once

class PlayerSeCtrl
{
public:
    PlayerSeCtrl(al::LiveActor const*, PlayerAnimator const*, HackCap const*, PlayerModelChangerHakoniwa const*, al::LiveActor const*, PlayerExternalVelocity const*);
    update();
    isPassAnimFrame(int) const;
};
