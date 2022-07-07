#pragma once

class UtsuboWatcher
{
public:
    UtsuboWatcher(char const*);
    init(al::ActorInitInfo const&);
    control();
    exeWait();
    checkTouchPosActiveUtsubo(sead::Vector3<float> const&);
    tryGetFreeUtsubo();
};
