#pragma once

namespace al { 

class NetworkTaskExecutor
{
public:
    NetworkTaskExecutor(char const*);
    ~NetworkTaskExecutor();
    execute();
    request();
};

} 
