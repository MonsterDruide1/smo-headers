#pragma once

namespace sead { namespace CalendarTime { 

class Month
{
public:
    Month(unsigned int);
    setValueOneOrigin(unsigned int);
    addSelf(unsigned int);
    subSelf(unsigned int);
    sub(sead::CalendarTime::Month) const;
    makeStringOneOrigin(unsigned int);
    makeFromValueOneOrigin(unsigned int);
};

} } 
