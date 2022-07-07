#pragma once

namespace nn { namespace nex { 

class Chrono
{
public:
    Chrono();
    Reset();
    ~Chrono();
    Start();
    Pause();
    UpdateAccumulatedTime();
    Elapsed() const;
    Resume();
    Check();
    Stop();
    GetState() const;
};

} } 
