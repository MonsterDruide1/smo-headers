#pragma once

namespace al { 

class Triangle
{
public:
    Triangle();
    Triangle(al::CollisionParts const&, al::KCPrismData const*, al::KCPrismHeader const*);
    fillData(al::CollisionParts const&, al::KCPrismData const*, al::KCPrismHeader const*);
    fill(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    getHostActor() const;
    isHostMoved() const;
    isValid() const;
    getNormal(int) const;
    getFaceNormal() const;
    getEdgeNormal(int) const;
    getPos(int) const;
    calcCenterPos(sead::Vector3<float>*) const;
    calcAndGetNormal(int);
    calcAndGetFaceNormal();
    calcAndGetEdgeNormal(int);
    calcAndGetPos(int);
    getLocalPos(sead::Vector3<float>*, int) const;
    calcForceMovePower(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcForceRotatePower(sead::Quat<float>*) const;
    getAttributes(al::ByamlIter*) const;
    getSensor() const;
    getBaseMtx() const;
    getBaseInvMtx() const;
    getPrevBaseMtx() const;
};

} 
