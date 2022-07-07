#pragma once

class EchoEmitter
{
public:
    EchoEmitter(char const*);
    init(al::ActorInitInfo const&);
    start(sead::Vector3<float> const&, float, int);
    startKeep(sead::Vector3<float> const&, float, int);
    exeWait();
    exeKeep();
    exeStop();
    getLife() const;
};
