#pragma once

namespace sead { 

class PrintOutput
{
public:
    writeLineBreak();
    operator<<(sead::PrintFormatter&);
    ~PrintOutput();
};

} 
