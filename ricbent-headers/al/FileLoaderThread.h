#pragma once

namespace al { 

class FileLoaderThread
{
public:
    FileLoaderThread(int);
    threadFunction(sead::Thread*, long);
    requestLoadFile(al::FileEntryBase*);
};

} 
