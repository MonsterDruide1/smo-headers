#pragma once

namespace sead { 

class TaskMgr
{
public:
    TaskMgr(sead::TaskMgr::InitializeArg const&);
    doInit_();
    beginCreateRootTask_();
    initialize(sead::TaskMgr::InitializeArg const&);
    initHostIO();
    finalize();
    destroyTaskSync(sead::TaskBase*);
    requestCreateTask(sead::TaskBase::CreateArg const&);
    createHeap_(sead::HeapArray*, sead::TaskBase::CreateArg const&);
    createTaskSync(sead::TaskBase::CreateArg const&);
    doCreateTask_(sead::TaskBase::CreateArg const&, sead::HeapArray*);
    changeTaskState_(sead::TaskBase*, sead::TaskBase::State);
    doRequestCreateTask_(sead::TaskBase::CreateArg const&, sead::DelegateEvent<sead::TaskBase*>::Slot*);
    appendToList_(sead::TList<sead::TaskBase*>&, sead::TaskBase*);
    requestTakeover(sead::TaskBase::TakeoverArg const&);
    requestTransition(sead::TaskBase*, sead::TaskBase*, sead::FaderTaskBase*);
    requestPush(sead::TaskBase::PushArg const&);
    pushSync(sead::TaskBase::PushArg const&);
    requestPop(sead::TaskBase*, sead::FaderTaskBase*);
    popSync(sead::TaskBase*);
    doDestroyTask_(sead::TaskBase*);
    requestPop(sead::TaskBase*, sead::TaskBase*, sead::FaderTaskBase*);
    prepare_(sead::Thread*, long);
    requestDestroyTask(sead::TaskBase*, sead::FaderTaskBase*);
    destroyable_(sead::TaskBase*);
    calcCreation_();
    calcDestruction_();
    destroyAllAndCreateRoot();
    findTask(sead::TaskClassID const&);
    beforeCalc();
    afterCalc();
};

} 
