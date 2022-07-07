#pragma once

namespace nn { namespace nex { 

class ScopedLogLevel
{
public:
    ScopedLogLevel(nn::nex::EventLog::LogLevel);
    ~ScopedLogLevel();
};

} } 
