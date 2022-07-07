#pragma once

class NexDataStoreCustomizeTestObj
{
public:
    NexDataStoreCustomizeTestObj(char const*, char const*);
    init(al::ActorInitInfo const&);
    getDataStoreDirector() const;
    exeWaitConnected();
    exeWait();
};
