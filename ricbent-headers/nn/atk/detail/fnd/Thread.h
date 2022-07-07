#pragma once

namespace nn { namespace atk { namespace detail { namespace fnd { 

class Thread
{
public:
    ~Thread();
    Run(nn::atk::detail::fnd::Thread::RunArgs const&);
    WaitForExit();
    Release();
    SetState(nn::atk::detail::fnd::Thread::State);
    GetPriority() const;
    GetState() const;
    OnRun();
    OnExit();
    Thread();
    SetPriority(int);
    Sleep(nn::atk::detail::fnd::TimeSpan const&);
    Create(nn::os::ThreadType&, long&, nn::atk::detail::fnd::Thread::RunArgs const&);
    Detach();
    SetName(char const*);
    SetAffinityMask(int, nn::atk::detail::fnd::Thread::AffinityMask);
    Resume();
    Join();
    IsTerminated() const;
    InvalidId;
    DefaultThreadPriority;
    MinThreadPriority;
    MaxThreadPriority;
    StackAlignment;
};

} } } } 
