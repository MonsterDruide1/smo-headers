#pragma once

namespace nn { namespace nex { 

class ProfilingUnit
{
public:
    Enable();
    Disable();
    IsEnabled();
    ProfilingUnit(char const*, unsigned int, char const*);
    Reset(nn::nex::Time);
    ~ProfilingUnit();
    Log();
    IncTime(unsigned long);
    IncTime(unsigned long, char const*);
    GetTotalTime() const;
    GetMinTime() const;
    GetMaxTime() const;
    GetLastTime() const;
    GetAvgTime() const;
    GetVarTime() const;
    GetNbOccurences() const;
    EnableLogging(bool);
    SetLoggingFrequency(unsigned int);
    GetName() const;
    GetID() const;
    CS();
    SetName(char const*);
    GetList();
    ResetAll();
    GetAllIDs();
    FindByID(unsigned int);
    FindByName(nn::nex::String const&);
    Report(nn::nex::qList<nn::nex::String> const&);
    s_bEnableProfiling;
    s_uiNextFreeID;
    s_lstProfilingUnits;
    s_cs;
};

} } 
