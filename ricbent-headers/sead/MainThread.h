#pragma once

namespace sead { 

class MainThread
{
public:
    ~MainThread();
    destroy();
    quit(bool);
    waitDone();
    quitAndDestroySingleThread(bool);
    setPriority(int);
    calc_(long);
};

} 
