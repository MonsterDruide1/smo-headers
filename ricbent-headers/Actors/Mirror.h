#pragma once

class Mirror
{
public:
    Mirror(char const*);
    init(al::ActorInitInfo const&);
    onAppear();
    onDisappear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    tryGetPairActor() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppear();
    exeDisappear();
    exeWait();
    exeBind();
};
