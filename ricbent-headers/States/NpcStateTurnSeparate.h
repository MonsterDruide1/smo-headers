#pragma once

class NpcStateTurnSeparate
{
public:
    NpcStateTurnSeparate(char const*, al::LiveActor*);
    startTurnToTarget(sead::Vector3<float> const&);
    tryStartTurnToTarget(sead::Vector3<float> const&, float);
    startTurnToDir(sead::Vector3<float> const&);
    tryStartTurnToDir(sead::Vector3<float> const&, float);
    exeTurn();
    ~NpcStateTurnSeparate();
};
