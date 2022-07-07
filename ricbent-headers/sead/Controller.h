#pragma once

namespace sead { 

class Controller
{
public:
    Controller(sead::ControllerMgr*);
    calc();
    getAddon(sead::ControllerDefine::AddonId) const;
    getAddonByOrder(sead::ControllerDefine::AddonId, int) const;
    isIdle_();
    setIdle_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~Controller();
    isConnected() const;
};

} 
