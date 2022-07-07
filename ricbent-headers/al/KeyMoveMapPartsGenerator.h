#pragma once

namespace al { 

class KeyMoveMapPartsGenerator
{
public:
    KeyMoveMapPartsGenerator(char const*);
    init(al::ActorInitInfo const&);
    exeDelay();
    exeGenerate();
};

} 
