#pragma once

namespace sead { 

class Framework
{
public:
    setProcessPriority(sead::Framework::ProcessPriority);
    reserveReset(void*);
    Framework();
    ~Framework();
    initialize(sead::Framework::InitializeArg const&);
    run(sead::Heap*, sead::TaskBase::CreateArg const&, sead::Framework::RunArg const&);
    createSystemTasks(sead::TaskBase*, sead::Framework::CreateSystemTaskArg const&);
    initRun_(sead::Heap*);
    quitRun_(sead::Heap*);
    runImpl_();
    procReset_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getMethodLogicalFrameBuffer(int) const;
};

} 
