#pragma once

namespace al { 

class ActorResourceHolder
{
public:
    ActorResourceHolder(int);
    tryFindActorResource(sead::SafeStringBase<char> const&);
    findActorResourceImpl(sead::SafeStringBase<char> const&);
    createActorResource(sead::SafeStringBase<char> const&, al::Resource*, al::Resource*);
    removeAll();
    eraseResourceUser(al::Resource*);
    freeErasedActorResource();
    ~ActorResourceHolder();
};

} 
