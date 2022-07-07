#pragma once

namespace al { 

class PartsModel
{
public:
    PartsModel(char const*);
    initPartsDirect(al::LiveActor*, al::ActorInitInfo const&, char const*, sead::Matrix34<float> const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    initPartsSuffix(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, sead::Matrix34<float> const*, bool);
    initPartsMtx(al::LiveActor*, al::ActorInitInfo const&, char const*, sead::Matrix34<float> const*, bool);
    initPartsFixFile(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, char const*);
    initPartsFixFileNoRegister(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, char const*);
    endClipped();
    updatePose();
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    offSyncAppearAndHide();
    onSyncAppearAndHide();
};

} 
