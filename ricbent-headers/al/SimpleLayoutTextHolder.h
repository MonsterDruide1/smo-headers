#pragma once

namespace al { 

class SimpleLayoutTextHolder
{
public:
    SimpleLayoutTextHolder(int, al::LayoutInitInfo const&, char const*, char const*, char const*);
    reset();
    start(sead::Vector2<float> const&, char const*);
    start(sead::Vector2<float> const&, char16_t const*);
};

} 
