#pragma once

namespace al { 

class TrafficAreaDirector
{
public:
    TrafficAreaDirector(al::AreaObjGroup const*, al::ITrafficAreaUpdateJudge const*);
    tryPermitEnterCar(sead::Vector3<float> const&);
    tryFindArea(sead::Vector3<float> const&) const;
    tryPermitEnterNpcAndSyncDrawClipping(al::LiveActor*);
    execute();
    getSceneObjName() const;
    ~TrafficAreaDirector();
};

} 
