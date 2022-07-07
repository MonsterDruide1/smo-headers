#pragma once

namespace al { 

class NpadController
{
public:
    NpadController(sead::ControllerMgr*);
    isConnected() const;
    isValidNpadId() const;
    getNpadId() const;
    setAnyControllerMode();
    setIndexControllerMode(int);
    getVibrationDeviceHandle(int) const;
    calcImpl_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~NpadController();
};

} 
