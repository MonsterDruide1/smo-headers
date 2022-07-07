#pragma once

namespace eui { 

class BoundingEx
{
public:
    BoundingEx();
    BoundingEx(nn::ui2d::ResBounding const*, nn::ui2d::ResBounding const*, nn::ui2d::BuildArgSet const&);
    BoundingEx(eui::BoundingEx const&);
    ~BoundingEx();
    GetRuntimeTypeInfo() const;
};

} 
