#pragma once

namespace eui { 

class RootPane
{
public:
    RootPane(eui::LayoutEx*);
    RootPane(nn::ui2d::ResPane const*, nn::ui2d::BuildArgSet const&);
    RootPane(eui::RootPane const&, eui::LayoutEx*);
    ~RootPane();
    GetRuntimeTypeInfo() const;
};

} 
