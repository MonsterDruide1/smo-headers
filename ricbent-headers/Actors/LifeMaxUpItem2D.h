#pragma once

class LifeMaxUpItem2D
{
public:
    LifeMaxUpItem2D(char const*);
    init(al::ActorInitInfo const&);
    appear();
    appearPopUp();
    appearByAmiibo(sead::Vector3<float> const&, sead::Vector3<float> const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppeared();
    exeSink();
    exeGotWaitLifeUpDemo();
    exeGotAppearCoin();
    exeVanishing();
    exeDeadWait();
    exeAutoGetDemo();
    getActorDimensionKeeper() const;
};
