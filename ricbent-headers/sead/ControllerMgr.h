#pragma once

namespace sead { 

class ControllerMgr
{
public:
    setInstance_(sead::TaskBase*);
    deleteInstance();
    ControllerMgr();
    ControllerMgr(sead::TaskConstructArg const&);
    prepare();
    initialize(int, sead::Heap*);
    initializeDefault(sead::Heap*);
    finalize();
    finalizeDefault();
    getControlDevice(sead::ControllerDefine::DeviceId) const;
    calc();
    getControllerByOrder(sead::ControllerDefine::ControllerId, int) const;
    getControllerAddon(int, sead::ControllerDefine::AddonId) const;
    getControllerAddonByOrder(int, sead::ControllerDefine::AddonId, int) const;
    findControllerPort(sead::Controller const*) const;
    getFramework() const;
    ~ControllerMgr();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    sInstance;
};

} 
