#pragma once

namespace eui { 

class WindowEx
{
public:
    GetRuntimeTypeInfoStatic();
    WindowEx(unsigned char, unsigned char);
    WindowEx(nn::ui2d::ResWindow const*, nn::ui2d::ResWindow const*, nn::ui2d::BuildArgSet const&);
    WindowEx(eui::WindowEx const&);
    ~WindowEx();
    GetRuntimeTypeInfo() const;
};

} 
