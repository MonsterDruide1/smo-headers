#pragma once

namespace al { 

class SeDuckingController
{
public:
    SeDuckingController();
    update();
    requestDucking(char const*, float, char const*, char const*);
    findDuckingRequest(char const*);
};

} 
