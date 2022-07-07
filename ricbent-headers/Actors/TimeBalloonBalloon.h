#pragma once

class TimeBalloonBalloon
{
public:
    TimeBalloonBalloon(char const*, bool, FriendsProfileDataHolder*);
    init(al::ActorInitInfo const&);
    appear();
    control();
    changeTextureUser();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitSet();
    exeStandbyGet();
    exePlayGet();
    exeTouched();
    exeBreak();
    isTouched() const;
    setNerveWaitSet();
    setNerveStandbyGet();
    setNervePlayGet();
    requestBreak();
    requestChangeTexture(unsigned long);
    changeTextureLuigi();
};
