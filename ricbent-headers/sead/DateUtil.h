#pragma once

namespace sead { namespace DateUtil {

isLeapYear(unsigned int);
calcWeekDay(sead::CalendarTime::Year const&, sead::CalendarTime::Month const&, sead::CalendarTime::Day const&);
calcSecondToCalendarSpan(sead::CalendarSpan*, unsigned long);
parseW3CDTFString(sead::CalendarTime*, sead::CalendarSpan*, sead::SafeStringBase<char> const&);

} } 
