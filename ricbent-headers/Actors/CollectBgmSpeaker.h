#pragma once

class CollectBgmSpeaker
{
public:
    CollectBgmSpeaker(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeOpen();
    exeClose();
    exePlayBgm();
    isOpen() const;
    close();
};
