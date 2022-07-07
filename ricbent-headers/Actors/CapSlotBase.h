#pragma once

class CapSlotBase
{
public:
    CapSlotBase(char const*);
    init(al::ActorInitInfo const&);
    isExist() const;
    isSuccess() const;
    updateSound();
    exeWait();
    exeStart();
    exeMove();
    exeSuccess();
    exeAppearItem();
    exeMiss();
    exeReset();
};
