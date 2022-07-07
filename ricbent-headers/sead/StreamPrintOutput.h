#pragma once

namespace sead { 

class StreamPrintOutput
{
public:
    ~StreamPrintOutput();
    write(char const*, int);
};

} 
