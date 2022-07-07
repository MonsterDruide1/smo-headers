#pragma once

namespace nn { namespace atk { namespace DeviceOutRecorder { 

class RecorderBuffer
{
public:
    RecorderBuffer(char const*);
    Initialize(short*, unsigned int);
    UpdateMaxSamples();
    Clear();
    Finalize();
    Push(short const*, unsigned int);
    Pop(unsigned int);
    Peek();
    SetReadBlockSamples(unsigned int);
};

} } } 
