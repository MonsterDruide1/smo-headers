#pragma once

namespace nn { namespace atk { 

class AudioRendererPerformanceReader
{
public:
    AudioRendererPerformanceReader();
    GetRequiredMemorySize(int);
    Initialize(int, void*, unsigned long);
    ReadPerformanceInfo();
    Record(void const*, unsigned long, nn::os::Tick);
    PerformanceInfoCountMin;
};

} } 
