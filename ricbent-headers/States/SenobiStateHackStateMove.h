#pragma once

class SenobiStateHackStateMove
{
public:
    SenobiStateHackStateMove(Senobi*, IUsePlayerHack**, IUsePlayerCollision*);
    appear();
    setLandNerve();
    isMoving() const;
    isFalling() const;
    isEnableStretch() const;
    exeWait();
    exeMove();
    exeFall();
    exeLand();
    ~SenobiStateHackStateMove();
};
