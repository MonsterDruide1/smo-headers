#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { namespace SequenceSoundLoader { 

class DataLoadTask
{
public:
    Initialize();
    TryAllocPlayerHeap();
    Execute(nn::atk::TaskProfileLogger&);
    ~DataLoadTask();
};

} } } } } 
