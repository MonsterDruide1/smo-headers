#pragma once

class WorldEndBorderKeeper
{
public:
    WorldEndBorderKeeper(al::LiveActor const*);
    reset();
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    exeOutside();
    exeInside();
    exePullBack();
    exeWaitBorder();
    ~WorldEndBorderKeeper();
};
