#pragma once

class FishingUpObj
{
public:
    FishingUpObj(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isKinopioBrigade() const;
    receiveEvent(al::EventFlowEventData const*);
    isPochi() const;
    isExistShine() const;
    isAfterGiveShine() const;
    isValidAfterAppearDemoEvent() const;
    tryStartAppearAndStartDemoEvent();
    tryUpdateShineHintTrans(sead::Vector3<float> const&);
    exeFishingUp();
    exePopUp();
    exeLand();
    exeEvent();
};
