#pragma once

class TRexHackTurnInfo
{
public:
    TRexHackTurnInfo();
    resetSpeed();
    updateWithInput();
    updateNoInput();
    setReverseInput();
    isExistPreInput() const;
    isInvalidUpdateTurnSpeed() const;
    calcInputScale() const;
};
