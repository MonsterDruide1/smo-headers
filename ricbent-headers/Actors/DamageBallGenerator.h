#pragma once

class DamageBallGenerator
{
public:
    DamageBallGenerator(char const*);
    init(al::ActorInitInfo const&);
    listenStart();
    listenKill();
    listenStop();
    control();
    changeStreinBgmVolume(sead::PtrArray<al::IBgmParamsChanger>*, float*) const;
    resetStreinBgmVolume(sead::PtrArray<al::IBgmParamsChanger>*) const;
    exeWait();
    exeDelayWait();
    exeLaunch();
    tryLaunch();
};
