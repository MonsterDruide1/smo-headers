#pragma once

class GrowSeedStateWait
{
public:
    GrowSeedStateWait(char const*, al::LiveActor*, GrowSeedStateWait::Param const*, sead::Quat<float>*, al::HitSensor*);
    resetFlashingTimer();
    appear();
    control();
    exeConnecting();
    setNerveNoConnect();
    exeNoConnect();
    isConnecting() const;
    tryStartMove();
    ~GrowSeedStateWait();
};
