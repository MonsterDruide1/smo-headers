#pragma once

namespace GunetterFunction {

attackSensorCommon(al::HitSensor*, al::HitSensor*);
attackSensorEnemyAttack(al::HitSensor*, al::HitSensor*, sead::Vector3<float> const&, float);
attackSensorEnemyBody(al::HitSensor*, al::HitSensor*);
receiveMsgCommon(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
getBodyOffset();
getRollBaseRadius();
getCollisionCheckDistance();
getRotateJointName();
checkFirstCollisionOnArrow(al::IUseCollision const*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
connectToGround(al::LiveActor*, sead::Quat<float>*, sead::Vector3<float> const&, bool);
connectKeyMoveToGround(al::LiveActor*, sead::Quat<float>*, GunetterKeyMover const*, float, bool);
connectKeyMoveToGroundAddSideOffset(al::LiveActor*, sead::Quat<float>*, GunetterKeyMover const*, float, bool);

} 
