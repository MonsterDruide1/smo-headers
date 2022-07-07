#pragma once

namespace sead { 

class DateTimeUtc
{
public:
    DateTimeUtc(unsigned long);
    DateTimeUtc(sead::CalendarTime::Year const&, sead::CalendarTime::Month const&, sead::CalendarTime::Day const&, sead::CalendarTime::Hour const&, sead::CalendarTime::Minute const&, sead::CalendarTime::Second const&);
    setUnixTime(sead::CalendarTime::Year const&, sead::CalendarTime::Month const&, sead::CalendarTime::Day const&, sead::CalendarTime::Hour const&, sead::CalendarTime::Minute const&, sead::CalendarTime::Second const&);
    DateTimeUtc(sead::CalendarTime const&);
    setUnixTime(sead::CalendarTime const&);
    DateTimeUtc(sead::DateTime const&);
    getCalendarTime(sead::CalendarTime*) const;
    setNow();
    diff(sead::DateTimeUtc) const;
    diffToNow() const;
};

} 
