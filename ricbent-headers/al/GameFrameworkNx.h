#pragma once

namespace al { 

class GameFrameworkNx
{
public:
    GameFrameworkNx(sead::GameFrameworkNx::CreateArg const&);
    createControllerMgr(sead::TaskBase*);
    initAgl(sead::Heap*, int, int, int, int, int, int);
    createInfLoopChecker(sead::TaskBase*, sead::TickSpan const&, int);
    clearFrameBuffer();
    procFrame_();
    procDraw_();
    present_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~GameFrameworkNx();
    createHostIOMgr(sead::TaskBase*, sead::HostIOMgr::Parameter*, sead::Heap*);
    checkDerivedRuntimeTypeInfoStatic(sead::RuntimeTypeInfo::Interface const*);
};

} 
