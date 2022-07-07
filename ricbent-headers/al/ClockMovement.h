#pragma once

namespace al { 

class ClockMovement
{
public:
    ClockMovement(al::ActorInitInfo const&);
    exeDelay();
    exeRotateSign();
    exeRotate();
    exeWait();
    isFirstStepDelay() const;
    isFirstStepRotateSign() const;
    isFirstStepRotate() const;
    isFirstStepWait() const;
    ~ClockMovement();
};

} 
