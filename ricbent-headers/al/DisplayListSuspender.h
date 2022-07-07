#pragma once

namespace al { 

class DisplayListSuspender
{
public:
    DisplayListSuspender(agl::DrawContext*, agl::DisplayList*, bool);
    ~DisplayListSuspender();
};

} 
