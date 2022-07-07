#pragma once

class RocketFlowerEquipWatcher
{
public:
    RocketFlowerEquipWatcher(al::ActorInitInfo const&);
    getSceneObjName() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endEquip(bool);
    equip(RocketFlower*, al::HitSensor*);
    isEquip() const;
    exeWait();
    exeDash();
    lineUp(sead::Quat<float> const&, sead::Vector3<float> const&);
    endDash();
    ~RocketFlowerEquipWatcher();
};
