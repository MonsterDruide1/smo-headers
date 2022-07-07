#pragma once

class EffectObjNpcManFar
{
public:
    EffectObjNpcManFar(char const*);
    init(al::ActorInitInfo const&);
    startClipped();
    endClipped();
    exeOn();
    exeOff();
    getBaseMtx() const;
};
