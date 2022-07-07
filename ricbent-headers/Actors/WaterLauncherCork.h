#pragma once

class WaterLauncherCork
{
public:
    WaterLauncherCork(char const*);
    init(al::ActorInitInfo const&);
    initChain(al::ActorInitInfo const&);
    kill();
    tryEndCamera();
    startBlow(sead::Vector3<float> const&);
    isEndBlow() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeStartCamera();
    exeBlow();
    exeBlowEnd();
};
