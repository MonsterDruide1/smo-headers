#pragma once

namespace nn { namespace nex { 

class EventLog
{
public:
    EventLog();
    ~EventLog();
    LogLevelToString(nn::nex::EventLog::LogLevel);
    SetLogLevel(nn::nex::EventLog::LogLevel);
    GetLogLevel();
    GetInstance();
    OutputImpl(nn::nex::EventLog::LogLevel, char const*, std::__va_list);
    AddCustomPrefix(char*, int, void*);
    TraceOutput(nn::nex::EventLog::LogLevel, char const*, std::__va_list);
};

} } 
