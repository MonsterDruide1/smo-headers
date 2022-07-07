#pragma once

namespace sead { 

class ThreadMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    initMainThread_(sead::Heap*);
    getCurrentThreadID_();
    ThreadMgr();
    initialize(sead::Heap*);
    destroy();
    destroyMainThread_();
    initHostIO();
    quitAndWaitDoneMultipleThread(sead::Thread**, int, bool);
    waitDoneMultipleThread(sead::Thread* const*, int);
    checkCurrentThreadStackOverFlow(char const*, int);
    checkCurrentThreadStackEndCorruption(char const*, int);
    checkCurrentThreadStackPointerOverFlow(char const*, int);
    ~ThreadMgr();
    isMainThread() const;
    sInstance;
};

} 
