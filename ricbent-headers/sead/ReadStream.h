#pragma once

namespace sead { namespace ReadStream {

readU8();
readU16();
readU32();
readU64();
readS8();
readS16();
readS32();
readS64();
readF32();
readU8(unsigned char&);
readU16(unsigned short&);
readU32(unsigned int&);
readU64(unsigned long&);
readS8(signed char&);
readS16(short&);
readS32(int&);
readS64(long&);
readF32(float&);
readBit(void*, unsigned int);
readString(sead::BufferedSafeStringBase<char>*, unsigned int);
readMemBlock(void*, unsigned int);
readF32BitImpl_(unsigned int, unsigned int);
readF64BitImpl_(unsigned int, unsigned int);

} } 
