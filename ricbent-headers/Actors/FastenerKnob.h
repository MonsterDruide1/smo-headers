#pragma once

class FastenerKnob
{
public:
    FastenerKnob(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeHackEnd();
    onHackEnd(sead::Quat<float> const&, FastenerVertex const*);
    reset();
    disappear();
    exeReset();
    isEnableCapture() const;
};
