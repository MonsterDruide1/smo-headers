#pragma once

namespace sead { 

class StreamPrintFormatter
{
public:
    StreamPrintFormatter(sead::StreamSrc*);
    StreamPrintFormatter(sead::StreamSrc*, char const*);
    flushAndWriteNullChar();
};

} 
