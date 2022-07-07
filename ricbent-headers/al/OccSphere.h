#pragma once

namespace al { 

class OccSphere
{
public:
    OccSphere();
    connectToHostJoint(al::LiveActor const*);
    calcConnectPos(sead::Vector3<float>*) const;
    tryCalcLightPosDir(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    setEnable(bool);
    postUpdate();
};

} 
