#pragma once

namespace al { 

class ModelAnimInterpInfoHolder
{
public:
    ModelAnimInterpInfoHolder();
    initWithArcPath(char const*, int);
    getInterpFrame(char const*, char const*) const;
};

} 
