#pragma once

namespace al { 

class SimpleLayoutText
{
public:
    SimpleLayoutText(al::LayoutInitInfo const&, char const*, char const*, char const*);
    start(sead::Vector2<float> const&, char const*, int);
    setPos(sead::Vector2<float> const&);
    setText(char const*);
    start(sead::Vector2<float> const&, char16_t const*, int);
    setText(char16_t const*);
    start(sead::Vector2<float> const&, char const*, char const*, int);
    setScale(float);
    setColor(sead::Color4u8 const&);
    setPositionCenterH();
    exeWait();
};

} 
