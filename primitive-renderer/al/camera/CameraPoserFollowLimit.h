#pragma once

#include "sead/math/seadVector.h"

/*
class CameraPoserFollowLimit {
    public:
        unsigned char massive[0x200];

        //sead::Vector3f lookAtPos; // 0x1F4
};
*/

namespace al {
    class CameraLimitRailKeeper;
    class CameraVerticalAbsorber2DGalaxy;
    class CameraArrowCollider;
}
class CameraAngleVerticalCtrl;

typedef unsigned char _BYTE;
typedef __int64 _QWORD;
typedef int _DWORD;

class CameraPoserFollowLimit
{
    public:
    __int64 field_0;
    __int64 field_8;
    __int64 *IUseCollision;
    __int64 field_18;
    __int64 *IUseNerve;
    _BYTE gap_28[20];
    double field_3C;
    double field_44;
    double field_4C;
    __int64 field_54;
    float field_5C;
    float field_60;
    _BYTE gap_64[4];
    char field_68;
    _BYTE gap_69[47];
    _QWORD field_98;
    _BYTE gap_A0[160];
    int field_140;
    _BYTE gap_144[4];
    al::CameraLimitRailKeeper *field_148;
    CameraAngleVerticalCtrl *mCameraAngleVerticalCtrl;
    __int64 curve;
    __int64 BossDistanceCurve;
    __int64 field_168;
    al::CameraVerticalAbsorber2DGalaxy *mCameraVerticalAbsorber2DGalaxy;
    __int64 field_178;
    __int64 field_180;
    __int64 field_188;
    al::CameraArrowCollider *mCameraArrowCollider;
    __int64 field_198;
    _BYTE gap_1A0[8];
    __int64 field_1A8;
    __int64 field_1B0;
    _BYTE gap_1B8[4];
    int field_1BC;
    float field_1C0;
    _BYTE gap_1C4[28];
    float StartAngleDegreeV;
    float field_1E4;
    _BYTE gap_1E8[8];
    float OutWaterResetAngleV;
    sead::Vector3f lookAtPos;
    char field_200;
    _BYTE gap_201[7];
    _DWORD field_208;
    float field_20C;
    bool IsBlendFollowAndParallel;
    bool IsSetTargetBackAngleH;
    char field_212;
    bool IsSetAngleH;
    bool IsValidCtrlDistance;
    bool IsInvalidSearchCollisionParts;
    bool IsInvalidDistanceChaser;
    bool IsInvalidInWater;
    bool IsInvalidOutWaterResetAngleV;
    bool IsInvalidWaterAutoCtrlAngleV;
    bool IsInvalidRequestSetAngleV;
    bool IsInvalidSlopeSnapAngleV;
    bool IsValid2DGalaxy;
    char field_21D;
    _BYTE gap_21E[2];
    int field_220;
    int field_224;
    float DistanceByUser;
    char field_22C;
    _BYTE gap_22D[7];
    _DWORD field_234;
    char field_238;
    _BYTE gap_239[11];
    __int64 field_244;
    double field_24C;
    bool IsApplyStartMovingDirOffset;
    _BYTE gap_255[3];
    float MaxMovingDirOffset;
    float MovingDirOffsetChaseRate;
    _BYTE gap_260[8];
    float FovyDegree;
    _BYTE gap_26C;
    bool IsSetClimbPoleAngleV;
    _BYTE gap_26E[2];
    float ClimbPoleAngleV;
    float field_274;
    bool IsInvalidSubTargetTurn;
    _BYTE gap_279[11];
    __int64 field_284;
};
