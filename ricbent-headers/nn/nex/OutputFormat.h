#pragma once

namespace nn { namespace nex { 

class OutputFormat
{
public:
    OutputFormat();
    StartString(char*, unsigned int);
    StartPrefixes(char*, unsigned int);
    AppendToString(char*, char const*, unsigned int);
    PreparePrefix(char*, unsigned int, char const*, ...);
    AddMessageImpl(char*, unsigned int, char const*, std::__va_list);
    AddPrefixes(char*, unsigned int);
    EndPrefixes(char*, unsigned int);
    AddIndent(char*, unsigned int);
    AddMessage(char*, unsigned int, char const*, std::__va_list);
    EndString(char*, unsigned int);
    EnableNumberTraces(bool);
    ShowProcessID(bool);
    ShowThreadID(bool);
    ShowLocalTime(bool);
    ShowDateTime(bool);
    ShowSystemThreadName(bool);
    ShowLocalStationHandle(bool);
    ShowSessionTime(bool);
    ShowCurrentContext(bool);
    ShowCID(bool);
    ShowPID(bool);
    AddPrefix(char const*);
    IncreaseIndent(unsigned int);
    DecreaseIndent(unsigned int);
    ~OutputFormat();
    s_pfStationHandleResolver;
    s_pfThreadNameResolver;
    s_pfCurrentContextResolver;
    s_pfSessionTimeResolver;
    s_pfCIDResolver;
    s_pfPIDResolver;
};

} } 
