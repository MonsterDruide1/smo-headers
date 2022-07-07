#pragma once

namespace al { 

class CameraStopJudge
{
public:
    CameraStopJudge();
    isStop() const;
    update(sead::Vector3<float> const&);
    getAreaObjDirector() const;
};

} 
