#pragma once

namespace nn { namespace nex { 

class ByteStream
{
public:
    ByteStream();
    Init();
    ByteStream(unsigned long);
    ByteStream(nn::nex::Buffer*);
    ~ByteStream();
    Clear();
    SetLength(unsigned long);
    AppendRaw(unsigned char const*, unsigned long);
    ExtractRaw(unsigned char*, unsigned long);
    Append(nn::nex::Time const*);
    Extract(nn::nex::Time*);
    AppendString(char const*);
    AppendString(char const*, unsigned long, unsigned long);
    AppendString(char const*, unsigned long);
    ExtractString(char*, unsigned short);
    CanAppend(unsigned int) const;
    CanExtract(unsigned int) const;
    TraceBytes(unsigned long, unsigned char*, unsigned long);
    Trace(unsigned long, bool);
    operator<<(nn::nex::Buffer const&);
    operator>>(nn::nex::Buffer&);
    operator<<(bool const&);
    operator>>(bool&);
    operator>>(nn::nex::ByteStream&);
    operator==(nn::nex::ByteStream const&) const;
};

} } 
