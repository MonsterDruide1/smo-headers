#pragma once

namespace sead { 

class DateSpan
{
public:
    DateSpan(long);
    DateSpan(sead::CalendarSpan const&);
    setTimeImpl_(int, int, int, int);
    DateSpan(sead::CalendarSpan::Day const&, sead::CalendarSpan::Hour const&, sead::CalendarSpan::Minute const&, sead::CalendarSpan::Second const&);
    getCalendarSpan(sead::CalendarSpan*) const;
    set(sead::CalendarSpan const&);
    set(sead::CalendarSpan::Day const&, sead::CalendarSpan::Hour const&, sead::CalendarSpan::Minute const&, sead::CalendarSpan::Second const&);
};

} 
