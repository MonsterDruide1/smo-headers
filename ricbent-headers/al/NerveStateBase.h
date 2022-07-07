#pragma once

namespace al { 

class NerveStateBase
{
public:
    init();
    kill();
    control();
    appear();
    NerveStateBase(char const*);
    update();
    ~NerveStateBase();
};

} 
