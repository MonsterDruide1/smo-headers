#pragma once

namespace nn { namespace atk { namespace detail { 

class CommandManager
{
public:
    CommandManager();
    ~CommandManager();
    Finalize();
    Initialize(void*, unsigned long, void (*)(nn::atk::detail::Command*));
    AllocMemory(unsigned long, bool);
    TryAllocMemory(unsigned long);
    RecvCommandReply();
    FlushCommand(bool, bool);
    WaitCommandReply(unsigned int);
    RecvCommandReplySync();
    PushCommand(nn::atk::detail::Command*);
    FlushCommand(bool);
    FinalizeCommandList(nn::atk::detail::Command*);
    IsFinishCommand(unsigned int) const;
    GetCommandBufferSize() const;
    GetAllocatableCommandSize() const;
    GetAllocatedCommandBufferSize() const;
    GetAllocatedCommandCount() const;
    ProcessCommand();
    SendCommandQueueCount;
    RecvCommandQueueCount;
    InvalidCommand;
};

} } } 
