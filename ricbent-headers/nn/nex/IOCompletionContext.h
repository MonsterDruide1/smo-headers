#pragma once

namespace nn { namespace nex { 

class IOCompletionContext
{
public:
    IOCompletionContext();
    Reset();
    ~IOCompletionContext();
    Trace(unsigned long);
};

} } 
