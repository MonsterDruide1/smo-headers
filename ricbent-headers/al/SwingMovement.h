#pragma once

namespace al { 

class SwingMovement
{
public:
    SwingMovement();
    SwingMovement(al::ActorInitInfo const&);
    updateRotate();
    exeMove();
    exeStop();
    isLeft() const;
    isStop() const;
    ~SwingMovement();
};

} 
