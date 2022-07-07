#pragma once

class KuriboGirl
{
public:
    KuriboGirl(char const*);
    init(al::ActorInitInfo const&);
    control();
    exeWait();
    lookFront();
    exeFind();
    lookPlayer();
    exeLoveLook();
    exeLoveLookTurn();
    exeSurprise();
    exeDisappear();
    exeHide();
    exeAppear();
    exePreLoveFind();
    exeLoveFind();
    exeAppearShineStart();
    exeAppearShine();
    exeAppearShineEnd();
    exeLookLoveAfter();
    exeWaitLoveAfter();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isWatchStart(sead::Vector3<float>);
    isNrvWait();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
