#pragma once

class FastenerObjParts
{
public:
    FastenerObjParts(char const*);
    init(al::ActorInitInfo const&);
    init(al::ActorInitInfo const&, bool);
    appear();
    disappear();
    updatePose();
    openOrClose(float);
    exeWait();
    exeOpen();
    exeDisappear();
    isModelL() const;
};
