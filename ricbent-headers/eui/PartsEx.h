#pragma once

namespace eui { 

class PartsEx
{
public:
    GetRuntimeTypeInfoStatic();
    PartsEx();
    PartsEx(nn::ui2d::ResParts const*, nn::ui2d::ResParts const*, nn::ui2d::BuildArgSet const&);
    PartsEx(eui::PartsEx const&);
    ~PartsEx();
    GetRuntimeTypeInfo() const;
};

} 
