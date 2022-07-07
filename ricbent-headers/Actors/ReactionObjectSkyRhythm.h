#pragma once

class ReactionObjectSkyRhythm
{
public:
    ReactionObjectSkyRhythm(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endClipped();
    getSyncFrame() const;
    control();
};
