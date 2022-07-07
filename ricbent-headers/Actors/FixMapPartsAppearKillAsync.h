#pragma once

class FixMapPartsAppearKillAsync
{
public:
    FixMapPartsAppearKillAsync(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
