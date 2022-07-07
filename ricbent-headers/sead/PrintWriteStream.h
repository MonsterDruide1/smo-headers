#pragma once

namespace sead { 

class PrintWriteStream
{
public:
    PrintWriteStream(sead::Stream::Modes);
    PrintWriteStream(sead::StreamFormat*);
    ~PrintWriteStream();
};

} 
