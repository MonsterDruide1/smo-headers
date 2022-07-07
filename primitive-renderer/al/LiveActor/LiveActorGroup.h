#pragma once

#include "al/hio/HioNode.h"
#include "sead/container/seadPtrArray.h"

namespace al
{
    class LiveActor;

    class LiveActorGroup : public al::HioNode
    {
    public:
        LiveActorGroup(const char *, int);

        virtual void registerActor(al::LiveActor *);

        const char* mGroupName; // 0x8
        sead::PtrArray<al::LiveActor> mActors; // 0x10
    };
};