#pragma once

namespace nn { namespace nex { 

class Buffer
{
public:
    AppendData(void const*, unsigned long, unsigned long);
    operator==(nn::nex::Buffer const&) const;
    operator[](unsigned long);
    operator=(nn::nex::Buffer const&);
    CopyContent(void*, unsigned long, unsigned long) const;
    SetDefaultBufferSize(unsigned long);
    GetDefaultBufferSize();
    Initialize(unsigned long, unsigned char);
    AllocateDataBuffer(unsigned long);
    Buffer(nn::nex::Buffer const&);
    Buffer(nn::nex::String const&);
    Buffer(nn::nex::Buffer&&);
    operator=(nn::nex::Buffer&&);
    FreeDataBuffer(unsigned char*, unsigned long);
    ~Buffer();
    SetHeadShiftSize(unsigned long);
    GetAllocateSize(unsigned long, unsigned long);
    ResizeByRealSize(unsigned long);
    operator+=(nn::nex::Buffer const&);
    operator+(nn::nex::Buffer const&);
    AttemptExpand(unsigned long);
    Swap(nn::nex::Buffer&);
    ComputeCheckSum(unsigned long, unsigned char);
    GetCheckSum();
    AppendCheckSum(unsigned char);
    StripCheckSum();
    IsCheckSumValid(unsigned char);
    Trace(unsigned long) const;
    ToString() const;
};

} } 
