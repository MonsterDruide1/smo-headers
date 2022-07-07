#pragma once

namespace nn { namespace atk { namespace detail { 

class CommandBuffer
{
public:
    CommandBuffer();
    ~CommandBuffer();
    Finalize();
    Initialize(void*, unsigned long);
    AllocMemory(unsigned long);
    FreeMemory(nn::atk::detail::Command*);
    GetCommandBufferSize() const;
    GetAllocatableCommandSize() const;
    GetAllocatedCommandBufferSize() const;
};

} } } 
