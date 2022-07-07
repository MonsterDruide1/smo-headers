#pragma once

class KoopaPuppet
{
public:
    KoopaPuppet(Koopa*);
    start(al::HitSensor*);
    end();
    endAndPopUp(sead::Vector3<float> const&);
    isBindWait() const;
    change2D();
    changeHackStart(sead::Vector3<float> const&, sead::Matrix34<float> const*);
    getBindHackStartActionFrame() const;
    getBindHackStartActionFrameMax() const;
    getTrans() const;
    calcQuat(sead::Quat<float>*) const;
    setTrans(sead::Vector3<float> const&);
    resetPosition(sead::Vector3<float> const&);
    updatePoseQuat(sead::Quat<float> const&);
    startAction(char const*);
    calcPuppetMoveDir(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    isTriggerSwing() const;
    hideModel();
    showModel();
    hideSilhouetteModel();
    showSilhouetteModel();
    changeHackTutorialElectricWire();
    closeHackTutorial();
};
