#pragma once

namespace nn { namespace nex { 

class BitStream
{
public:
    BitStream();
    Init();
    BitStream(nn::nex::Buffer*);
    AdjustLength();
    ~BitStream();
    Clear();
    SetPosition(unsigned long);
    AppendByteImpl(unsigned char);
    AppendBitImpl(bool);
    ExtractByteImpl(unsigned char&);
    CanExtract(unsigned long) const;
    ExtractBitImpl(bool&);
    AppendRaw(unsigned char const*, unsigned long);
    PrepareAppend(unsigned long);
    ExtractRaw(unsigned char*, unsigned long);
    CanAppend(unsigned long) const;
    Append(unsigned char const*, unsigned long, unsigned long);
    Extract(unsigned char*, unsigned long, unsigned long);
    TraceBits(unsigned long, unsigned char*, unsigned long);
    Trace(unsigned long);
    operator<<(nn::nex::Buffer const&);
    operator>>(nn::nex::Buffer&);
    operator>>(unsigned int&);
    operator>>(nn::nex::BitStream&);
    operator==(nn::nex::BitStream const&) const;
    Append(bool const*);
    Extract(bool*);
};

} } 
