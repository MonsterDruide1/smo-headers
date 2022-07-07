#pragma once

namespace nn { namespace atk { namespace detail { 

class DriverCommand
{
public:
    ProcessCommandList(nn::atk::detail::Command*);
    GetInstance();
    GetInstanceForTaskThread();
    DriverCommand();
    Initialize(void*, unsigned long);
    RequestProcessCommand();
};

} } } 
