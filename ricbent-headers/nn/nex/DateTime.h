#pragma once

namespace nn { namespace nex { 

class DateTime
{
public:
    DateTime();
    DateTime(nn::nex::DateTime const&);
    DateTime(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);
    operator=(nn::nex::DateTime const&);
    DateTime(nn::time::PosixTime const&);
    FromUnixEpochTime(long);
    DateTime(nn::time::CalendarTime const&);
    operator unsigned long();
    operator unsigned long() const;
    operator==(nn::nex::DateTime const&) const;
    operator!=(nn::nex::DateTime const&) const;
    operator<(nn::nex::DateTime const&) const;
    operator>(nn::nex::DateTime const&) const;
    operator<=(nn::nex::DateTime const&) const;
    operator>=(nn::nex::DateTime const&) const;
    operator-(nn::nex::DateTime const&) const;
    ToEpochTime() const;
    GetYear() const;
    GetMonth() const;
    GetDay() const;
    GetHour() const;
    GetMinute() const;
    GetSecond() const;
    IsValid() const;
    IsNever() const;
    Trace(unsigned long);
    ToPosixTime() const;
    ToUnixEpochTime() const;
    ToCalendarTime() const;
    GetSystemTime(nn::nex::DateTime&);
    GetLocalSystemTime(nn::nex::DateTime&);
    IsLeapYear(int) const;
    DateToDays(int, int, int) const;
    DaysToDate(int);
    FromCustomEpochTime(long, int);
    FromEpochTime(long);
    Never;
    Future;
};

} } 
