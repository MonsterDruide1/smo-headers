#pragma once

typedef unsigned char _BYTE;

class CameraAngleVerticalInfo {
    public:
    float mDefaultAngle;
    float mMinAngle;
    float mMaxAngle;
    float mWaterNeutralAngle;
    bool IsSetAngleRangeV;
    bool IsValidAutoLook;
    bool IsInvalidHackFlyerCtrl;
    bool IsInvalidAutoLowAngleReset;
};

class CameraAngleVerticalCtrl {
    public:
    _BYTE gap_0[120];
    int isInWater;
    _BYTE gap_7C[12];
    __int64 verticalCtrlInfo;
    _BYTE gap_90[36];
    int waterCtrlInterpTime;
    _BYTE gap_B8[8];
    float forceSetAngle; // C0
    float interpAngle; // C4
    _BYTE gap_C8[16]; // C8
    float angle; // D8
};