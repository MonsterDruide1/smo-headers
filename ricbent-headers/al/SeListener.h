#pragma once

namespace al { 

class SeListener
{
public:
    SeListener();
    startPoser(char const*, int);
    endPoser(char const*, int);
    update(al::ISeListenerParam const&);
    getCurrentPoser() const;
    isUseLineListener() const;
    calcDirectivityVolume(float, float) const;
    getMatrix() const;
    getPosition() const;
    getPositionPtr() const;
    getPositionSub() const;
    getPositionSubPtr() const;
    getMtxForAngle() const;
    getVelocity() const;
    getInteriorSize() const;
    setInteriorSize(float);
};

} 
