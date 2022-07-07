#pragma once

namespace al { 

class DspSinValueController
{
public:
    DspSinValueController(float, float);
    init(float);
    update();
    changeTarget(float, int);
    changeFreq(float);
};

} 
