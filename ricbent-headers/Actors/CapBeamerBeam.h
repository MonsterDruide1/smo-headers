#pragma once

class CapBeamerBeam
{
public:
    CapBeamerBeam(char const*, char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    emit();
    exeAppearSign();
    exeActive();
    exeFadeOut();
    exeDeactive();
};
