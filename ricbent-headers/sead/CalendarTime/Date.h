#pragma once

namespace sead { namespace CalendarTime { 

class Date
{
public:
    Date(sead::CalendarTime::Year const&, sead::CalendarTime::Month const&, sead::CalendarTime::Day const&);
    calcWeek();
};

} } 
