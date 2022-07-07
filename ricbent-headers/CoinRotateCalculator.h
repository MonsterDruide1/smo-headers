#pragma once

class CoinRotateCalculator
{
public:
    CoinRotateCalculator(al::LiveActor*);
    reset();
    update(sead::Vector3<float> const&, bool);
    addFishingLineTouch();
    getRotate() const;
    getRotateSpeed() const;
};
