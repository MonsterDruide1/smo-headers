#pragma once

namespace al { 

class AudioEffectDataBase
{
public:
    create(char const*, char const*);
    AudioEffectDataBase(al::Resource*, char const*);
};

} 
