#pragma once

namespace nn { namespace nex { 

class Variant
{
public:
    Variant();
    Variant(nn::nex::Variant const&);
    operator=(nn::nex::Variant const&);
    ~Variant();
    Variant(long);
    Variant(unsigned long);
    Variant(int);
    Variant(unsigned int);
    Variant(double);
    Variant(bool);
    Variant(nn::nex::String const&);
    Variant(char const*);
    Variant(nn::nex::DateTime const&);
    GetType() const;
    GetUInt64Value() const;
    GetInt64Value() const;
    GetInt32Value() const;
    GetUInt32Value() const;
    GetDoubleValue() const;
    GetBoolValue() const;
    GetStringValue() const;
    GetDateTimeValue() const;
    operator==(nn::nex::Variant const&) const;
    operator=(nn::nex::Variant&&);
    operator!=(nn::nex::Variant const&) const;
    Trace(unsigned int) const;
};

} } 
