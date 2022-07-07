#pragma once

namespace al { 

class SimpleLayoutTextWrapper
{
public:
    SimpleLayoutTextWrapper(al::SimpleLayoutText*);
    start(sead::Vector2<float> const&, char const*, int);
    start(sead::Vector2<float> const&, char16_t const*, int);
    setScale(float);
    setColor(sead::Color4u8 const&);
    setPos(sead::Vector2<float> const&);
};

} 
