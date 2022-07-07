#pragma once

class EffectObjAlpha
{
public:
    EffectObjAlpha(char const*);
    init(al::ActorInitInfo const&);
    onAlpha();
    offAlpha();
};
