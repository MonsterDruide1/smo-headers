#pragma once

class AimingCursor
{
public:
    AimingCursor(char const*, al::LayoutInitInfo const&);
    startAppear();
    end();
    setTrans(sead::Vector2<float> const&);
    setScale(float);
    tryLookOn();
    tryLookOff();
    exeAppear();
    exeWait();
    exeEnd();
};
