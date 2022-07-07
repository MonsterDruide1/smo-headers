#pragma once

namespace nn { namespace nex { 

class StringStream
{
public:
    operator<<(char const*);
    operator<<(nn::nex::StringStream const&);
    StringStream();
    ~StringStream();
    FreeBuffer();
    GetLength() const;
    Clear();
    FreeBuffer(char*);
    ResizeBuffer(unsigned long);
    TestFreeRoom(unsigned long);
    StreamNumber(unsigned char);
    AddBaseIfRequired();
    StreamNumber(unsigned int);
    StreamNumber(int);
    operator<<(bool);
    operator<<(double);
    operator<<(float);
    operator<<(void const*);
    operator<<(unsigned long);
    operator<<(long);
    BytesDump(unsigned char const*, unsigned long);
    BytesAsciiDump(unsigned char const*, unsigned long);
};

} } 
