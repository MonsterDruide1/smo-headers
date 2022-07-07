#pragma once

namespace sead { 

class BufferingPrintOutput
{
public:
    ~BufferingPrintOutput();
    write(char const*, int);
};

} 
