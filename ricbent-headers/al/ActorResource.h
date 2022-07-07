#pragma once

namespace al { 

class ActorResource
{
public:
    ActorResource(sead::SafeStringBase<char> const&, al::Resource*, al::Resource*);
    initResourceData(char const*, bool);
    ~ActorResource();
};

} 
