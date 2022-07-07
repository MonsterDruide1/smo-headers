#pragma once

namespace al { 

class DemoSyncedEventKeeper
{
public:
    DemoSyncedEventKeeper(al::AudioDirector*);
    updateOnlyWhenDemoRun(int);
    finalize();
    startDemo(char const*);
    endDemo(bool, bool);
};

} 
