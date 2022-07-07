#pragma once

class TalkMessageInfoParam
{
public:
    TalkMessageInfoParam(al::LiveActor*, bool const*, bool const*, bool);
    initState(al::ActorInitInfo const&, char16_t const*);
    listenOn();
    listenOff();
    listenKill();
    listenAppear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    kill();
    invalidateClipping();
    isEnableAppear() const;
    isInArea() const;
    onAppear();
    onAppearEnd();
    isShowDisableCap() const;
    getMessageSystem() const;
};
