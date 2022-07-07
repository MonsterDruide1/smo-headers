#pragma once

namespace FukankunZoomTargetFunction {

declareUseFukankunZoomTargetActor(al::LiveActor const*);
registerFukankunZoomTargetActor(al::LiveActor const*, int, sead::Vector3<float> const&, char const*);
getWatchCount(al::LiveActor const*);
getFukankunWatchCountDefault();
getFukankunCameraNearDistThres();
tryGetActiveFukankunLinkedShineMtx(sead::Matrix34<float> const**, al::LiveActor const*);
tryGetFukankunZoomObj(al::IUseSceneObjHolder const*, al::PlacementInfo const&);
registerFukankunZoomObj(al::LiveActor const*, al::PlacementInfo const&);
getFukankunZoomTargetActorNum(al::IUseSceneObjHolder const*);
tryGetFukankunZoomTargetActor(al::IUseSceneObjHolder const*, int);
tryGetFukankunZoomTargetActorIsNoZoomOn(al::IUseSceneObjHolder const*, int);
tryGetFukankunZoomTargetActorZoomType(al::IUseSceneObjHolder const*, int);
tryGetFukankunZoomTargetActorOffset(al::IUseSceneObjHolder const*, int);
tryGetFukankunZoomTargetActorTargetJointName(al::IUseSceneObjHolder const*, int);
declareWatchFukankunZoomTargetActor(Fukankun const*, int);

} 
