#pragma once

namespace sead { 

class TaskBase
{
public:
    onDestroy();
    TaskBase(sead::TaskConstructArg const&);
    TaskBase(sead::TaskConstructArg const&, char const*);
    ~TaskBase();
    attachCalc();
    attachDraw();
    attachCalcDraw();
    prepare();
    enterCommon();
    enter();
    exit();
    onEvent(sead::TaskEvent const&);
    isDescendantOf(sead::TaskBase*) const;
    adjustHeap(int);
    adjustHeapWithSlackWithoutLock_(int, unsigned int);
    adjustHeapAll();
    adjustHeapWithSlack(int, unsigned int);
    requestCreateTask(sead::TaskBase::CreateArg const&);
    createTaskSync(sead::TaskBase::CreateArg const&);
    createChildTaskSync(sead::TaskBase::CreateArg&);
    requestTakeover(sead::TaskBase::TakeoverArg const&);
    requestTransition(sead::TaskBase*, sead::FaderTaskBase*);
    requestPush(sead::TaskBase::PushArg const&);
    pushSync(sead::TaskBase::PushArg const&);
    requestPop();
    doneDestroy();
    getFramework() const;
    getMethodTreeMgr() const;
    isConnectable(sead::TaskBase*) const;
    attachMethodWithCheck(int, sead::MethodTreeNode*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    pauseCalcChild(bool);
    pauseDrawChild(bool);
};

} 
