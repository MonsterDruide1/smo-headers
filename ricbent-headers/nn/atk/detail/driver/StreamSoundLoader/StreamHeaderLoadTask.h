#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { namespace StreamSoundLoader { 

class StreamHeaderLoadTask
{
public:
    ~StreamHeaderLoadTask();
    Execute(nn::atk::TaskProfileLogger&);
};

} } } } } 
