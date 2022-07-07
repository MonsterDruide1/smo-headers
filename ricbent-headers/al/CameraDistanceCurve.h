#pragma once

namespace al { 

class CameraDistanceCurve
{
public:
    CameraDistanceCurve(char const*, al::CameraDistanceAtPoint const*, int);
    getDefaultCurve();
    findOrDefaultCurve(al::ByamlIter const&);
    getRocketFlowerCurve();
    getGiantWanderBossCurve();
    getKoopaShellCurve();
    getTRexPatrolCurve();
    calcDistance(float) const;
};

} 
