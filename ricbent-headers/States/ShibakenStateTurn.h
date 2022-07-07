#pragma once

class ShibakenStateTurn
{
public:
    ShibakenStateTurn(char const*, al::LiveActor*);
    tryStartTurn(sead::Vector3<float> const&);
    exeTurnL30();
    exeTurnL90();
    exeTurnL180();
    exeTurnR30();
    exeTurnR90();
    exeTurnR180();
    ~ShibakenStateTurn();
};
