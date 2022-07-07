#pragma once

class PlayerActionTurnControl
{
public:
    PlayerActionTurnControl(al::LiveActor*);
    setup(float, float, float, float, int, int, int);
    reset();
    update(sead::Vector3<float> const&, sead::Vector3<float> const&);
    calcTilt(sead::Vector3<float>*, sead::Vector3<float> const&, float);
    calcTurnPowerRate(sead::Vector3<float> const&) const;
};
