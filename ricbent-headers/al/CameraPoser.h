#pragma once

namespace al { 

class CameraPoser
{
public:
    endInit();
    end();
    makeLookAtCamera(sead::LookAtCamera*) const;
    isZooming() const;
    getName() const;
    getNerveKeeper() const;
    getAudioKeeper() const;
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    receiveRequestFromObject(al::CameraObjectRequestInfo const&);
    startSnapShotMode();
    endSnapShotMode();
    requestTurnToDirection(al::CameraTurnInfo const*);
    update();
    start(al::CameraStartInfo const&);
    init();
    CameraPoser(char const*);
    tryCalcOrthoProjectionInfo(al::OrthoProjectionInfo*) const;
    isEnableRotateByPad() const;
    getFovyDegree() const;
    getSceneFovyDegree() const;
    getAreaObjDirector() const;
    getCollisionDirector() const;
    getInputHolder() const;
    getTargetHolder() const;
    getFlagCtrl() const;
    getRailRider() const;
    isInterpoleByCameraDistance() const;
    getInterpoleStep() const;
    setInterpoleStep(int);
    resetInterpoleStep();
    isInterpoleEaseOut() const;
    setInterpoleEaseOut();
    isEndInterpoleByStep() const;
    getEndInterpoleStep() const;
    initNerve(al::Nerve const*, int);
    initArrowCollider(al::CameraArrowCollider*);
    initAudioKeeper(char const*);
    initRail(al::PlacementInfo const&);
    initLocalInterpole();
    initLookAtInterpole(float);
    initOrthoProjectionParam();
    tryInitAreaLimitter(al::PlacementInfo const&);
    load(al::ByamlIter const&);
    isFirstCalc() const;
    appear(al::CameraStartInfo const&);
    movement();
    makeLookAtCameraPrev(sead::LookAtCamera*) const;
    makeLookAtCameraPost(sead::LookAtCamera*) const;
    makeLookAtCameraLast(sead::LookAtCamera*) const;
    makeLookAtCameraCollide(sead::LookAtCamera*) const;
    calcCameraPose(sead::LookAtCamera*) const;
    receiveRequestFromObjectCore(al::CameraObjectRequestInfo const&);
    startSnapShotModeCore();
    endSnapShotModeCore();
};

} 
