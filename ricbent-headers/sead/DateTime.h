#pragma once

namespace sead { 

class DateTime
{
public:
    DateTime(unsigned long);
    DateTime(sead::CalendarTime::Year const&, sead::CalendarTime::Month const&, sead::CalendarTime::Day const&, sead::CalendarTime::Hour const&, sead::CalendarTime::Minute const&, sead::CalendarTime::Second const&);
    setUnixTime(sead::CalendarTime::Year const&, sead::CalendarTime::Month const&, sead::CalendarTime::Day const&, sead::CalendarTime::Hour const&, sead::CalendarTime::Minute const&, sead::CalendarTime::Second const&);
    DateTime(sead::CalendarTime const&);
    setUnixTime(sead::CalendarTime const&);
    DateTime(sead::DateTimeUtc const&);
    initializeSystemTimeModule();
    getCalendarTime(sead::CalendarTime*) const;
    setNow();
    diff(sead::DateTime) const;
    diffToNow() const;
    mIsInitialized;
};

} 
