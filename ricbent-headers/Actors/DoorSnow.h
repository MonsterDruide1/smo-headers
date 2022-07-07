#pragma once

class DoorSnow
{
public:
    DoorSnow(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeOpen();
    reset(unsigned int);
    startDemo(unsigned int);
    isDemoEnd() const;
};
