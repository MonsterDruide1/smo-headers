#pragma once

namespace nn { namespace nex { 

class Log
{
public:
    Log();
    OutputImpl(char const*, std::__va_list, void*);
    ~Log();
    Output(char const*, ...);
    OutputString(char const*, ...);
    PrepareOutput(char*, unsigned int, void*);
    SetOutputFormat(nn::nex::OutputFormat*);
    SetLogDevice(nn::nex::LogDevice*, bool);
    GetLogDevice();
    SetLogFilter(nn::nex::LogFilter*);
    GetLogFilter();
    GetOutputFormat();
    AddCustomPrefix(char*, int, void*);
};

} } 
