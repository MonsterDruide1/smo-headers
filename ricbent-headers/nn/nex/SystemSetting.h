#pragma once

namespace nn { namespace nex { 

class SystemSetting
{
public:
    SetValue(unsigned int);
    GetList();
    SystemSetting(char const*, unsigned int);
    ~SystemSetting();
    GetAllNames();
    CheckIfMutable() const;
    Find(char const*);
};

} } 
