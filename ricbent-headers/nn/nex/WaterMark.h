#pragma once

namespace nn { namespace nex { 

class WaterMark
{
public:
    Inc(unsigned int);
    Dec(unsigned int);
    WaterMark(char const*, bool, unsigned int);
    Init();
    Register(nn::nex::WaterMark*);
    Set(unsigned int);
    ~WaterMark();
    Unregister(nn::nex::WaterMark*);
    IsComputingAverage();
    Reset(unsigned int, unsigned int);
    Reset();
    UpdateAverage(unsigned int);
    SetCurrent(unsigned int);
    GetCurrent() const;
    GetHigh() const;
    GetWholeHigh() const;
    SetWindowSize(unsigned int);
    GetWindowSize() const;
    GetLow() const;
    GetAverage() const;
    Trace(unsigned long) const;
    Log() const;
    Print() const;
    GetAllIDs();
    GetWaterMarkList();
    FindByID(unsigned int);
    FindByName(nn::nex::String const&);
    ResetAll();
    TraceAll(unsigned long);
    LogAll(bool);
    DisableRegistering(bool);
    s_uiNextFreeID;
    m_bDisableRegistering;
};

} } 
