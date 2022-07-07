#pragma once

class CollectionList
{
public:
    CollectionList(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isOpen() const;
    close();
    exeWait();
    exeOpen();
    exeAfterClose();
};
