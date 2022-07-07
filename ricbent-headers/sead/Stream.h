#pragma once

namespace sead { 

class Stream
{
public:
    Stream();
    Stream(sead::StreamSrc*, sead::Stream::Modes);
    setMode(sead::Stream::Modes);
    Stream(sead::StreamSrc*, sead::StreamFormat*);
    setUserFormat(sead::StreamFormat*);
    setBinaryEndian(sead::Endian::Types);
    skip(unsigned int);
    skip(unsigned int, unsigned int);
    rewind();
    isEOF();
    ~Stream();
    BASIC_STREAM_FORMAT;
};

} 
