#pragma once

class ActorJointControlGroundPose
{
public:
    ActorJointControlGroundPose(al::LiveActor const*, int, char const*, char const*, char const*);
    createLegJointLink(char const*);
    createSpineSubJointBuffer(int);
    addSpineSubJoint(char const*);
    createHipSubJointBuffer(int);
    addHipSubJoint(char const*);
    setSupportDirX();
    calcJointCallback(int, sead::Matrix34<float>*);
    calcRootMtx(sead::Matrix34<float>*);
    calcSpineMtx(sead::Matrix34<float>*);
    calcHipMtx(sead::Matrix34<float>*);
    calcLegLinkMtx(sead::Matrix34<float>*, ActorJointControlGroundPose::JointLinkInfo const&);
    getCtrlTypeName() const;
};
