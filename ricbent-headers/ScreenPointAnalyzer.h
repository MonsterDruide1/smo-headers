#pragma once

class ScreenPointAnalyzer
{
public:
    ScreenPointAnalyzer();
    reset();
    update();
    analyze(sead::Vector2<float> const&);
    isHold() const;
    isSlide() const;
};
