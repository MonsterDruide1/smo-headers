#pragma once

namespace al { 

class ActorParamHolder
{
public:
    getYamlName();
    tryCreate(al::LiveActor*, al::Resource const*, char const*);
    findParamS32(char const*) const;
    tryFindParamInfoByName(char const*) const;
    findParamF32(char const*) const;
    findParamMove(char const*) const;
    findParamJump(char const*) const;
    findParamSight(char const*) const;
    findParamRebound(char const*) const;
    ActorParamHolder(al::LiveActor*, al::Resource const*, char const*);
};

} 
