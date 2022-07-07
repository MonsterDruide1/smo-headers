#pragma once

namespace nn { namespace nex { 

class StreamBundling
{
public:
    StreamBundling();
    ~StreamBundling();
    Enable(int);
    SetMaxFlushDelay(int);
    Flush();
    UpdateFlushTime();
    GetLastFlushTime();
};

} } 
