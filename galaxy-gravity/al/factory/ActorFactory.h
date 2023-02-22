#pragma once

#include "Factory.h"

namespace ca {
    template <class T>
    al::LiveActor *createCustomActor(const char *name)
    {
        return new T(name);
    };
}

namespace al
{

    template <class T>
    al::LiveActor *createActorFunction(const char *name);

    class LiveActor;

    typedef al::LiveActor *(*createActor)(const char *name);

    class ActorFactory : public al::Factory<createActor>
    {
    public:
        ActorFactory(const char *fName)
        {
            this->mFactoryName = fName;
            this->mFactoryEntries = nullptr;
            this->mNumFactoryEntries = 0;
        };
    };
    
    class ProjectActorFactory : public al::ActorFactory
    {
    public:
        ProjectActorFactory();
    };
}
