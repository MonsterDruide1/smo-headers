#pragma once

class FilterFly
{
public:
    FilterFly(char const*, al::LayoutInitInfo const&, char const*);
    exeWait();
    exeWaitEnd();
    exeMove();
    move(sead::Vector2<float> const&);
    isWaitEnd() const;
};
