#pragma once

class SenobiComponentStretch
{
public:
    SenobiComponentStretch(Senobi*);
    getStretchLengthMax() const;
    tryStretch(float);
    isHack() const;
    start();
    startSwing();
    isSwingStretch() const;
    isStretchExtra() const;
    changeNormalStretch();
    update();
    exeNormal();
    exeExtra();
    exeExtraEnd();
    exeSwingStretch();
    exeSwingStretchEnd();
    ~SenobiComponentStretch();
};
