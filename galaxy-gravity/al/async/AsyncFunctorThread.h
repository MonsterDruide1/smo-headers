#pragma once

#include "types.h"
#include "prim/seadSafeString.h"
#include "FunctorBase.h"
#include "thread/seadDelegateThread.h"
#include "thread/seadMessageQueue.h"
#include "mc/seadCoreInfo.h"

namespace al
{
    class AsyncFunctorThread {
        public:
            AsyncFunctorThread(sead::SafeStringBase<char> const &functorName, al::FunctorBase const &functor, int blockType, int stackSize, sead::CoreId id);
            // this function is whats passed into the delegate thread as the function to call when the thread becomes unblocked
            void threadFunction(sead::Thread *, s64); // unused args
            
            bool isDone() const {return this->mIsDone;};
            void start();
        private:
            unsigned char padding_08[0x8];
            sead::DelegateThread *mDelegateThread;
            al::FunctorBase functor;
            bool mIsDone;
    };
} // namespace al

static_assert(sizeof(al::AsyncFunctorThread) == 0x20);
