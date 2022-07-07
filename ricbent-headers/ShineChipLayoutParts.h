#pragma once

class ShineChipLayoutParts
{
public:
    ShineChipLayoutParts(al::LayoutInitInfo const&, char const*);
    appear();
    isInArea() const;
    tryUpdateCount(int, int);
    isEndCompleteAnim() const;
    exeAppear();
    exeWait();
    exeAdd();
    exeAddNoAnim();
    exeComplete();
    exeEnd();
};
