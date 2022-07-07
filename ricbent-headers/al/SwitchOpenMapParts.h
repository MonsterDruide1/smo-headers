#pragma once

namespace al { 

class SwitchOpenMapParts
{
public:
    SwitchOpenMapParts(char const*);
    init(al::ActorInitInfo const&);
    open();
    close();
    exeWait();
    exeDelayOpen();
    exeOpen();
    exeWaitOpend();
    exeDelayClose();
    exeClose();
};

} 
