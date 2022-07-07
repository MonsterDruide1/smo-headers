#pragma once

namespace sead { 

class GameFramework
{
public:
    saveScreenShot(sead::SafeStringBase<char> const&);
    isScreenShotBusy() const;
    GameFramework();
    ~GameFramework();
    startDisplay();
    createSystemTasks(sead::TaskBase*, sead::Framework::CreateSystemTaskArg const&);
    createControllerMgr(sead::TaskBase*);
    createHostIOMgr(sead::TaskBase*, sead::HostIOMgr::Parameter*, sead::Heap*);
    createProcessMeter(sead::TaskBase*);
    createSeadMenuMgr(sead::TaskBase*);
    createInfLoopChecker(sead::TaskBase*, sead::TickSpan const&, int);
    createCuckooClock(sead::TaskBase*);
    initialize(sead::Framework::InitializeArg const&);
    waitStartDisplayLoop_();
    quitRun_(sead::Heap*);
    lockFrameDrawContext();
    unlockFrameDrawContext();
    initHostIO_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
