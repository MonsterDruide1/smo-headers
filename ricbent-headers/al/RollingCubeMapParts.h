#pragma once

namespace al { 

class RollingCubeMapParts
{
public:
    RollingCubeMapParts(char const*);
    init(al::ActorInitInfo const&);
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    appearAndSetStart();
    setNerveNextMovement(bool);
    isNextFallKey() const;
    exeWait();
    exeStart();
    exeRotate();
    getMovementTime() const;
    setNerveNextLand();
    exeSlide();
    updateSlide();
    exeFall();
    setNerveNextFallLand();
    exeLand();
    getLandTime() const;
    exeFallLand();
    exeStop();
    isStop() const;
};

} 
