#pragma once

class PlayerPushReceiver
{
public:
    PlayerPushReceiver(al::LiveActor const*);
    clear();
    receivePushMsg(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*, float);
    receivePushMsgHacker(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*, float, bool);
    receivePushMsgYoshiNpc(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*, float);
    receivePushMsgCap(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*, float);
    receivePushMsgGrowPlant(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*, float);
    receiveCollidePushMsg(al::SensorMsg const*);
    receiveForceDirect(sead::Vector3<float> const&);
    cutPushVec(sead::Vector3<float> const&);
    calcPushVec(sead::Vector3<float>*) const;
    calcOnlyCollidePushVec(sead::Vector3<float>*) const;
    calcPushedVelocity(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcPushedVelocityCommon(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    calcPushedVelocityWithCollide(sead::Vector3<float>*, sead::Vector3<float> const&, IUsePlayerCollision const*, float) const;
};
