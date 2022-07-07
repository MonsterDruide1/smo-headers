#pragma once

namespace al { 

class DemoSyncedBgmCtrl
{
public:
    tryCreate(al::AudioDirector*);
    DemoSyncedBgmCtrl(al::AudioDirector*);
    update(int);
    finalize();
    startDemo(char const*);
    endDemo(char const*, bool);
    notifyDemoSkip();
    getAudioKeeper() const;
};

} 
