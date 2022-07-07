#pragma once

#include "al/LiveActor/LiveActor.h"
#include "sead/math/seadVector.h"
#include "sead/math/seadMatrix.h"
#include "sead/math/seadQuat.h"

namespace al
{
	
    // ACTOR
	sead::Vector3f getTransPtr(al::LiveActor *);
	sead::Vector3f getRotatePtr(al::LiveActor *);
	sead::Vector3f getScalePtr(al::LiveActor *);
	sead::Vector3f tryGetScalePtr(al::LiveActor *);
	sead::Quatf getQuatPtr(al::LiveActor *);
	
    void copyPose(al::LiveActor *,al::LiveActor const*);
	void updatePoseTrans(al::LiveActor *,sead::Vector3<float> const&);
	void updatePoseRotate(al::LiveActor *,sead::Vector3<float> const&);
	void updatePoseQuat(al::LiveActor *,sead::Quat<float> const&);
	void updatePoseMtx(al::LiveActor *,sead::Matrix34<float> const*);
	void setTrans(al::LiveActor *,float,float,float);
	void setTransX(al::LiveActor *,float);
	void setTransY(al::LiveActor *,float);
	void setTransZ(al::LiveActor *,float);
	void setRotate(al::LiveActor *,float,float,float);
	void setRotateX(al::LiveActor *,float);
	void setRotateY(al::LiveActor *,float);
	void setRotateZ(al::LiveActor *,float);
	void setScale(al::LiveActor *,sead::Vector3<float> const&);
	void setScale(al::LiveActor *,float,float,float);
	void setScaleAll(al::LiveActor *,float);
	void setScaleX(al::LiveActor *,float);
	void setScaleY(al::LiveActor *,float);
	void setScaleZ(al::LiveActor *,float);
	void tryGetQuatPtr(al::LiveActor *);
	void setQuat(al::LiveActor *,sead::Quat<float> const&);
	void getFrontPtr(al::LiveActor *);
	void setFront(al::LiveActor *,sead::Vector3<float> const&);
	void getUpPtr(al::LiveActor *);
	void setUp(al::LiveActor *,sead::Vector3<float> const&);
	void setTrans(al::LiveActor *,sead::Vector3<float> const&);
};