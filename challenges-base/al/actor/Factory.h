#pragma once

#include "al/factory/ActorFactory.h"

namespace al
{
    class LiveActor;

    struct FactoryEntry
    {
        const char* mName; // _0
        void* mCreationFunction; // _8
    };

    class ProjectActorFactory : public al::ActorFactory
    {
    public:
        ProjectActorFactory();
    };
};
