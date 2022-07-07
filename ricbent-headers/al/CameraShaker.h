#pragma once

namespace al { 

class CameraShaker
{
public:
    CameraShaker();
    update(char const*);
    startShakeByAction(char const*, char const*, char const*, int);
    startShakeByName(char const*, int);
    startShakeByHitReaction(char const*, char const*, char const*, int);
    exeWait();
    exeShake();
    exeShakeLoop();
    startShakeByIndex(int, int);
    ~CameraShaker();
};

} 
