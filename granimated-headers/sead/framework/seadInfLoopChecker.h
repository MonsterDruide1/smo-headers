#pragma once

#include "sead/basis/seadTypes.h"
#include "sead/framework/seadCalculateTask.h"
#include "sead/framework/seadTaskMgr.h"
#include "sead/thread/seadAtomic.h"

namespace sead
{
class InfLoopChecker : public CalculateTask
{
    SEAD_TASK_SINGLETON(InfLoopChecker)
    SEAD_RTTI_OVERRIDE(InfLoopChecker, CalculateTask)

public:
    struct InfLoopParam
    {
    };

    using InfLoopEvent = DelegateEvent<const InfLoopParam&>;

    explicit InfLoopChecker(const TaskConstructArg& arg);
    ~InfLoopChecker() override;

    void countUp();
    void prepare() override;
    void calc() override;

    InfLoopEvent& getEvent() { return mEvent; }

private:
    void onInfLoop_();

    u32 mLoopCount;
    u32 mLoopThreshold;
    bool mEnabled;
    InfLoopEvent mEvent;
    sead::Atomic<u32> mSkipCounter;
};
}  // namespace sead
