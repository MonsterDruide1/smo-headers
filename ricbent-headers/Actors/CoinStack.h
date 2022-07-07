#pragma once

class CoinStack
{
public:
    CoinStack(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeFloat();
    exeFall();
    getBelow();
    exeLand();
    getAbove();
    makeStackAppear();
    makeStackDisappear();
    changeAlpha(float);
    getFallSpeed();
    exeCollected();
    setAbove(CoinStack*);
    setBelow(CoinStack*);
    signalFall(unsigned int, float);
    postInit(CoinStackGroup*, sead::Vector3<float> const&, CoinStack*, sead::Vector3<float> const&, float, float const*);
    ~CoinStack();
};
