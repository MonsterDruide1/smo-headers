#pragma once

namespace al { 

class DemoSyncedSeCtrl
{
public:
    tryCreate(al::AudioDirector*);
    DemoSyncedSeCtrl(al::AudioDirector*);
    update(int);
    finalize();
    startDemo(char const*);
    endDemo(char const*, bool);
    notifyDemoSkip();
    setSeKeeper(al::SeKeeper*);
    getSeKeeper() const;
    getCurPlayingSeName() const;
    getCurPlayingSeStartFrame() const;
};

} 
