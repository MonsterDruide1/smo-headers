#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { namespace StreamSoundLoader { 

class StreamCloseTask
{
public:
    ~StreamCloseTask();
    Execute(nn::atk::TaskProfileLogger&);
};

} } } } } 
