#pragma once

class FukankunZoomObjHolder
{
public:
    FukankunZoomObjHolder();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    execute();
    tryGetFukankunZoomObj(al::PlacementId const&);
    declareUseFukankunZoomTargetActor();
    registerFukankunZoomObj(al::LiveActor const*, al::PlacementId const*);
    registerFukankunZoomTargetActor(al::LiveActor const*, int, sead::Vector3<float> const&, char const*);
    getFukankunZoomTargetActorNum() const;
    tryGetFukankunZoomTargetActor(int) const;
    tryGetFukankunZoomTargetActorIsNoZoomOn(int) const;
    tryGetFukankunZoomTargetActorZoomType(int) const;
    tryGetFukankunZoomTargetActorOffset(int) const;
    tryGetFukankunZoomTargetActorTargetJointName(int) const;
    declareWatchFukankunZoomTargetActor(Fukankun const*, int);
    getWatchCount(al::LiveActor const*) const;
    tryGetActiveFukankunLinkedShineMtx(sead::Matrix34<float> const**) const;
    getSceneObjName() const;
    ~FukankunZoomObjHolder();
};
