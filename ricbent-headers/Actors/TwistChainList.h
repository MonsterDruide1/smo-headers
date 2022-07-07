#pragma once

class TwistChainList
{
public:
    TwistChainList(char const*);
    init(al::ActorInitInfo const&);
    init(al::ActorInitInfo const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, char const*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isExistChain(int);
    fixChain(int);
    startBlow(sead::Vector3<float> const&);
    forceKill();
    getChainCount() const;
    exeFix();
    exeTwist();
    exeBlow();
};
