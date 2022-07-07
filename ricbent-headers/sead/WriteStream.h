#pragma once

namespace sead { 

class WriteStream
{
public:
    ~WriteStream();
    writeU8(unsigned char);
    writeU16(unsigned short);
    writeU32(unsigned int);
    writeU64(unsigned long);
    writeS8(signed char);
    writeS16(short);
    writeS32(int);
    writeS64(long);
    writeF32(float);
    writeBit(void const*, unsigned int);
    writeString(sead::SafeStringBase<char> const&, unsigned int);
    writeMemBlock(void const*, unsigned int);
    writeComment(sead::SafeStringBase<char> const&);
    writeLineComment(sead::SafeStringBase<char> const&);
    writeDecorationText(sead::SafeStringBase<char> const&);
    writeNullChar();
    flush();
    writeF32BitImpl_(float, unsigned int, unsigned int);
    writeF64BitImpl_(double, unsigned int, unsigned int);
};

} 
