#pragma once

class DemoSoundSynchronizer
{
public:
    DemoSoundSynchronizer(al::ApplicationMessageReceiver const*, al::AudioDirector*);
    startSync();
    endSync();
    resume(int);
    update();
    tryResume();
    trySync(int, al::DemoSyncedEventKeeper*);
    trySyncCommon(int, int, long);
    trySync(int, int, long);
    pause();
};
