#pragma once

class TalkNpcParam
{
public:
    TalkNpcParam();
    init(al::LiveActor const*, char const*);
    isEqualModelName(al::LiveActor const*) const;
    isEqualSuffixName(char const*) const;
    createAndAppendJointLookAtController(al::LiveActor*) const;
    createJointGroundSmoothController(al::LiveActor*) const;
    applyMaterialAnimPreset(al::LiveActor*, char const*) const;
    getEventFlowActorParam() const;
    findEventFlowActorSuffixParam(char const*) const;
    tryInitPartialSklAnim(al::LiveActor*) const;
    isValidFacialAnim() const;
    updateFacialAnim(al::LiveActor*) const;
    tryGetByeByeBaseJointName(al::LiveActor const*) const;
    getByeByeLocalAxisFront(sead::Vector3<float>*) const;
    calcBirdGlideMtx(sead::Matrix34<float>*, al::LiveActor const*) const;
    isInvalidJointLookSklAnim(char const*) const;
    isInvalidChangeAllAnimFromWait(char const*) const;
    isInvalidChangeTurnAnimFromWait(char const*) const;
    isPlayerWatchDisregard(al::HitSensor const*) const;
    calcPlayerWatchTrans(sead::Vector3<float>*, al::LiveActor const*) const;
    isInvalidTrampleSensor(al::HitSensor const*) const;
    isEnableReactionRestartEvent(al::IUseNerve const*) const;
    manualInitLookAtJoint(char const*, char const*, al::LiveActor const*, char const*);
};
