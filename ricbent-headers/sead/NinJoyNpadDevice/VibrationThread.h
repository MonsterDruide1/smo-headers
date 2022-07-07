#pragma once

namespace sead { namespace NinJoyNpadDevice { 

class VibrationThread
{
public:
    ~VibrationThread();
    requestVibration(nn::hid::VibrationDeviceHandle const&, nn::hid::VibrationValue const&);
    VibrationThread(sead::Heap*);
    calc_(long);
};

} } 
