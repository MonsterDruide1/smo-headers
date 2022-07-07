#pragma once

namespace nn { namespace nex { 

class TraceLog
{
public:
    ~TraceLog();
    GetInstance();
    TraceLog();
    OutputArgp(char const*, std::__va_list);
    SetFlag(char const*);
};

} } 
