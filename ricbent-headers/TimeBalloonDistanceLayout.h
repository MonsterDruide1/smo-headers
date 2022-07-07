#pragma once

class TimeBalloonDistanceLayout
{
public:
    TimeBalloonDistanceLayout(al::LayoutInitInfo const&);
    tryAppear();
    tryEnd();
    calcDistance(al::LiveActor const*);
};
