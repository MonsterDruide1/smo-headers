#pragma once

class HomeChairPlayerEyeController
{
public:
    HomeChairPlayerEyeController();
    init(al::ActorInitInfo const&);
    update();
    getCapLookPos(sead::Vector3<float>*) const;
    validate();
    invalidate();
    lookDefault(IUsePlayerPuppet**, sead::Vector3<float>*);
    lookCap(IUsePlayerPuppet**, sead::Vector3<float>*);
    lookAround(IUsePlayerPuppet**, sead::Vector3<float>*);
    exeWait();
    exeForceLookCap();
    exeLookAroundWait();
    exeLookAroundMove();
    exeReturnDefaultLook();
    ~HomeChairPlayerEyeController();
};
