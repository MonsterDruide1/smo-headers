#pragma once

namespace al { 

class JointRippleGenerator
{
public:
    JointRippleGenerator(al::LiveActor const*);
    reset();
    updateAndGenerate();
};

} 
