#pragma once

namespace sead { 

class CalendarTime
{
public:
    CalendarTime(sead::CalendarTime::Date const&, sead::CalendarTime::Time const&);
    CalendarTime(sead::CalendarTime::Year const&, sead::CalendarTime::Month const&, sead::CalendarTime::Day const&, sead::CalendarTime::Hour const&, sead::CalendarTime::Minute const&, sead::CalendarTime::Second const&);
    setDate(sead::CalendarTime::Date const&);
    getYearDays() const;
    makeWeekDayNameLabel_(sead::BufferedSafeStringBase<char>*, sead::CalendarTime::Week);
    cMonth_Jan;
    cMonth_Feb;
    cMonth_Mar;
    cMonth_Apr;
    cMonth_May;
    cMonth_Jun;
    cMonth_Jul;
    cMonth_Aug;
    cMonth_Sep;
    cMonth_Oct;
    cMonth_Nov;
    cMonth_Dec;
    cDefaultYear;
    cDefaultMonth;
    cDefaultDay;
    cDefaultHour;
    cDefaultMinute;
    cDefaultSecond;
};

} 
