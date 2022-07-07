#pragma once

namespace nn { namespace nex { 

class PropertyVariant
{
public:
    PropertyVariant();
    ~PropertyVariant();
    GetID() const;
    SetID(unsigned int const&);
    GetValue() const;
    SetValue(nn::nex::Variant const&);
};

} } 
