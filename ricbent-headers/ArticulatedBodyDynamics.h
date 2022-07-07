#pragma once

class ArticulatedBodyDynamics
{
public:
    ArticulatedBodyDynamics();
    init(al::LiveActor*);
    createNode(char const*);
    initKinematics();
    update(sead::Vector3<float> const&);
    updatePos();
    updateDynamics();
    updateIKByCCD(int);
    calcJointAxisVec(SpatialVector*, ArticulatedBodyJointInfo const*, sead::Vector3<float> const&);
    calcBias(SpatialVector*, ArticulatedBodyJointInfo*);
    calcRotateLimitationForce(sead::Vector3<float>*, ArticulatedBodyJointInfo const*);
    calcRecurrenceArticulatedInertia(SpatialMtx*, ArticulatedBodyJointInfo*, ArticulatedBodyJointInfo*);
    calcRecurrenceBiasTerm(SpatialVector*, ArticulatedBodyJointInfo*, ArticulatedBodyJointInfo*);
    calcCoriolis(SpatialVector*, ArticulatedBodyJointInfo*, ArticulatedBodyJointInfo*);
    calcIS(SpatialMtx6x3*, ArticulatedBodyJointInfo*);
    calcSISInv(sead::Matrix33<float>*, ArticulatedBodyJointInfo*);
    calcQ(sead::Vector3<float>*, ArticulatedBodyJointInfo*, SpatialVector const&);
    calcQSub(sead::Vector3<float>*, ArticulatedBodyJointInfo*);
    transformSpVecLinkNext(SpatialVector*, SpatialVector const&, ArticulatedBodyJointInfo const*);
    calcJointAxisProduct(sead::Vector3<float>*, ArticulatedBodyJointInfo const*, SpatialVector const&);
    updateIKByPIK(int);
    updateFK(sead::TListNode<ArticulatedBodyJointInfo>*);
    rotateJointInfo(sead::TListNode<ArticulatedBodyJointInfo>*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    transformSpMtxLinkPrev(SpatialMtx*, SpatialMtx const&, ArticulatedBodyJointInfo const*, ArticulatedBodyJointInfo const*);
    transformSpVecLinkPrev(SpatialVector*, SpatialVector const&, ArticulatedBodyJointInfo const*);
};
