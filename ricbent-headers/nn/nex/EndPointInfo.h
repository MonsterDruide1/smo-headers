#pragma once

namespace nn { namespace nex { 

class EndPointInfo
{
public:
    EndPointInfo();
    Reset();
    Trace(nn::nex::EventLog::LogLevel) const;
};

} } 
