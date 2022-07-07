#pragma once

class PlayerFormSensorCollisionArranger
{
public:
    PlayerFormSensorCollisionArranger(al::LiveActor*, PlayerColliderHakoniwa*, IPlayerModelChanger const*, PlayerHackKeeper const*);
    setFormModel3D();
    setFormModel2D();
    setFormActionSquat();
    setFormActionStandup();
    setFormActionWallGrab(sead::Vector3<float> const&);
    setFormActionGrabCeil(sead::Vector3<float> const&);
    setFormActionPoleClimb(sead::Vector3<float> const&);
    setFormActionSwim();
    setFormActionHack();
    setFormActionBind(bool);
    setFormActionRecovery();
    setFormActionAbyss(sead::Vector3<float> const&);
    setFormActionDead();
    setFormAttackSensorNone();
    setFormAttackSensorSpin();
    setFormAttackSensorTornado();
    setCollisionShapeOffsetGround(float);
    getHeadSensorName() const;
    getHeadPos() const;
    getHeadRadius() const;
    getBodyPos() const;
    isEnableSafetyPointForm() const;
    update();
    syncForm();
    validateAttackSensor();
};
