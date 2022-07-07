#pragma once

namespace sead { 

class NinJoyNpadDevice
{
public:
    NinJoyNpadDevice(sead::ControllerMgr*, sead::Heap*);
    ~NinJoyNpadDevice();
    calc();
    setNpadIdUpdateNum(unsigned int);
    setSupportedNpadStyleSet(nn::util::BitFlagSet<32, nn::hid::NpadStyleTag>);
    setNpadJoyHoldType(nn::hid::NpadJoyHoldType);
    getNpadJoyAssignment(int);
    setNpadJoyAssignmentModeSingle(int);
    setNpadJoyAssignmentModeSingle(int, nn::hid::NpadJoyDeviceType);
    setNpadJoyAssignmentModeDual(int);
    mergeSingleJoyAsDualJoy(int, int);
    swapNpadAssignment(int, int);
    disconnectNpad(int);
    sendVibrationValue(int, int, nn::hid::VibrationValue const&);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
