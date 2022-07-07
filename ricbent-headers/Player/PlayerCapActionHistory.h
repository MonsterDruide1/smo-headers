#pragma once

class PlayerCapActionHistory
{
public:
    PlayerCapActionHistory(al::LiveActor const*, PlayerConst const*, PlayerTrigger const*, IUsePlayerCollision const*);
    update();
    clearLandLimit();
    clearLimitHeight();
    clearCapJump();
    clearLandLimitStandAngle();
    clearWallAirLimit();
    recordLimitHeight();
    isOverLimitHeight() const;
};
