#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { namespace WaveSoundLoader { 

class FreePlayerHeapTask
{
public:
    Initialize();
    Execute(nn::atk::TaskProfileLogger&);
    ~FreePlayerHeapTask();
};

} } } } } 
