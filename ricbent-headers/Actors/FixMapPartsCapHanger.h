#pragma once

class FixMapPartsCapHanger
{
public:
    FixMapPartsCapHanger(char const*);
    init(al::ActorInitInfo const&);
    movement();
    calcAnim();
};
