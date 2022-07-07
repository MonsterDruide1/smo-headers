#pragma once

namespace al { 

class ScreenPointKeeper
{
public:
    isExistFile(al::Resource const*, char const*);
    ScreenPointKeeper();
    initByYaml(al::LiveActor*, al::Resource const*, al::ActorInitInfo const&, char const*);
    initArray(int);
    addTarget(al::LiveActor*, al::ActorInitInfo const&, char const*, float, sead::Vector3<float> const*, char const*, sead::Vector3<float> const&);
    update();
    validate();
    getTarget(int) const;
    invalidate();
    validateBySystem();
    invalidateBySystem();
    getTarget(char const*) const;
    isExistTarget(char const*) const;
};

} 
