#pragma once

namespace sead { 

class NinDebugController
{
public:
    NinDebugController(sead::ControllerMgr*);
    calcImpl_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~NinDebugController();
    isConnected() const;
};

} 
