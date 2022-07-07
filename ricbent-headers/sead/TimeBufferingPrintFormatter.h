#pragma once

namespace sead { 

class TimeBufferingPrintFormatter
{
public:
    TimeBufferingPrintFormatter();
    outputTimeStamp_();
    TimeBufferingPrintFormatter(char const*);
};

} 
