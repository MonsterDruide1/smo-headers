#pragma once

namespace eui { namespace LayoutEx { 

class CalculatePaneContext
{
public:
    CalculatePaneContext();
    CalculatePaneContext(nn::ui2d::DrawInfo const&, nn::ui2d::Layout const*);
};

} } 
