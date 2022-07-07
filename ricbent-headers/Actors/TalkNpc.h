#pragma once

class TalkNpc
{
public:
    TalkNpc(char const*);
    init(al::ActorInitInfo const&);
    onFukankunCameraNearClipSetting();
    offFukankunCameraNearClipSetting();
    initAfterPlacement();
    tryGetCurrentEventState() const;
    movement();
    tryGetCurrentEvent() const;
    calcAnim();
    updateCollider();
    kill();
    endClipped();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    startDemoKoopa(sead::Vector3<float> const&);
    endDemoKoopa();
    exeEvent();
    exeHackEvent();
    exeKinopioBrigadeFirstEvent();
    exeDemoKoopa();
};
