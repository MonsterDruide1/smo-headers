#pragma once

namespace al { 

class CameraDirector
{
public:
    CameraDirector(int);
    ~CameraDirector();
    init(al::CameraPoserSceneInfo*, al::CameraPoserFactory const*);
    getPoseUpdater(int) const;
    endInit(al::PlayerHolder const*);
    createCameraFromFactory(char const*, al::PlacementId const*, char const*, int, sead::Matrix34<float> const&);
    createCamera(al::CameraPoser*, al::PlacementId const*, char const*, int, sead::Matrix34<float> const&, bool);
    execute();
    update();
    createObjectCamera(al::PlacementId const*, char const*, char const*, int, sead::Matrix34<float> const&);
    createObjectEntranceCamera(al::PlacementId const*, char const*, sead::Matrix34<float> const&);
    createMirrorObjectCamera(al::PlacementId const*, char const*, int, sead::Matrix34<float> const&);
    initAreaCameraSwitcherMultiForPrototype(al::AreaObjDirector*);
    getCameraInput(int) const;
    setCameraInput(al::ICameraInput const*);
    setViewCameraInput(al::ICameraInput const*, int);
    initAreaCameraSwitcherSingle();
    initResourceHolder(al::CameraResourceHolder const*);
    registerCameraRailHolder(al::CameraRailHolder*);
    initSceneFovyDegree(float);
    setCameraParamTransferFuncTable(al::NameToCameraParamTransferFunc const*, int);
    initSettingCloudSea(float);
    initSnapShotCameraAudioKeeper(al::IUseAudioKeeper*);
    initAndCreatePauseCameraCtrl(float);
    getSceneFovyDegree() const;
    validateCameraArea2D();
    invalidateCameraArea2D();
    stopByDeathPlayer();
    restartByDeathPlayer();
    startInvalidStopJudgeByDemo();
    endInvalidStopJudgeByDemo();
    startSnapShotMode(bool);
    endSnapShotMode();
};

} 
