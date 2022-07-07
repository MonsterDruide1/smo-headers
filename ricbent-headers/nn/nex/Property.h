#pragma once

namespace nn { namespace nex { 

class Property
{
public:
    Property();
    ~Property();
    GetID() const;
    SetID(unsigned int const&);
    GetValue() const;
    SetValue(int const&);
};

} } 
