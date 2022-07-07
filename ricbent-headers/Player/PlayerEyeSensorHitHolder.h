#pragma once

class PlayerEyeSensorHitHolder
{
public:
    PlayerEyeSensorHitHolder(int);
    createTargetMarkerBuffer(int);
    createEatTargetBuffer(int);
    clear();
    tryRecordHomingAttack(al::HitSensor*, al::HitSensor*);
    tryRecordTargetMarker(al::HitSensor*, al::HitSensor*);
    tryRecordEatTarget(al::HitSensor*, al::HitSensor*);
    tryRecordLookAtTarget(al::HitSensor*, al::HitSensor*);
    tryRecordPriorityTarget(al::LiveActor const*, al::HitSensor*, al::HitSensor*);
    isEnableRecord(al::HitSensor*, al::HitSensor*) const;
    isEnableRecordLookAt(al::HitSensor*, al::HitSensor*) const;
    findNearestSensorDirH(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float) const;
    findNearestSensor(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float) const;
    findNearestSensorLimit(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float, float) const;
    findTargetMarkerSensor(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float) const;
    findEatTargetSensor(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float) const;
};
