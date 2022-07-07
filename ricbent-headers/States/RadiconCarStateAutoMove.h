#pragma once

class RadiconCarStateAutoMove
{
public:
    RadiconCarStateAutoMove(RadiconCar*);
    appear();
    calcAccel(sead::Vector3<float>*) const;
    exeWait();
    exeMove();
    ~RadiconCarStateAutoMove();
};
