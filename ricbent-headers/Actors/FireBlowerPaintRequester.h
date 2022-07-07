#pragma once

class FireBlowerPaintRequester
{
public:
    FireBlowerPaintRequester(char const*);
    init(al::ActorInitInfo const&);
    requestEmitFireCollide(sead::Vector3<float> const&, sead::Vector3<float> const&);
    exeWait();
    addSensorPairInfo(al::HitSensor*, al::HitSensor*, int);
};
