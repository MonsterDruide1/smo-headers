#pragma once

namespace al { 

class CameraRequestParamHolder
{
public:
    CameraRequestParamHolder();
    resetPlayerType();
    isPlayerTypeFlyer() const;
    onPlayerTypeFlyer(al::IUseCamera const*, char const*);
    isPlayerTypeHighSpeedMove() const;
    onPlayerTypeHighSpeedMove(al::IUseCamera const*, char const*);
    isPlayerTypeHighJump() const;
    onPlayerTypeHighJump(al::IUseCamera const*, char const*);
    isPlayerTypeNotTouchGround() const;
    onPlayerTypeNotTouchGround(al::IUseCamera const*, char const*);
    onRideObj(al::IUseCamera const*, char const*);
    offRideObj(al::IUseCamera const*, char const*);
};

} 
