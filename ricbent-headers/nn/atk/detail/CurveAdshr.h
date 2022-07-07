#pragma once

namespace nn { namespace atk { namespace detail { 

class CurveAdshr
{
public:
    CurveAdshr();
    Initialize(float);
    SetAttack(int);
    SetHold(int);
    SetDecay(int);
    SetSustain(int);
    SetRelease(int);
    Reset(float);
    GetValue() const;
    Update(int);
    CalcDecibelSquare(int);
    CalcRelease(int);
    VolumeInit;
    AttackInit;
    HoldInit;
    DecayInit;
    SustainInit;
    ReleaseInit;
    DecibelSquareTableSize;
    CalcDecibelScaleMax;
    DecibelSquareTable;
};

} } } 
