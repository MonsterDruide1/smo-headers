#pragma once

namespace nn { namespace nex { 

class ThreadScrambler
{
public:
    ThreadScrambler();
    ScramblingThread(void*);
    ~ThreadScrambler();
    CreateInstance();
    DeleteInstance();
    Register(nn::nex::ObjectThreadRoot*);
    Unregister(nn::nex::ObjectThreadRoot*);
    _Instance;
};

} } 
