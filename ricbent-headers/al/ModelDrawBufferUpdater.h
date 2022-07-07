#pragma once

namespace al { 

class ModelDrawBufferUpdater
{
public:
    ModelDrawBufferUpdater(al::ExecuteDirector const*);
    executeUpdateAsync(sead::Thread*, long);
    ~ModelDrawBufferUpdater();
    executeUpdate();
    tryUpdateAsync();
    waitAsync() const;
};

} 
