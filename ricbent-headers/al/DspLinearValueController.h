#pragma once

namespace al { 

class DspLinearValueController
{
public:
    DspLinearValueController(float);
    init(float);
    update();
    changeTarget(float, int);
};

} 
