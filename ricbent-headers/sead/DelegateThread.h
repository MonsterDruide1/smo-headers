#pragma once

namespace sead { 

class DelegateThread
{
public:
    DelegateThread(sead::SafeStringBase<char> const&, sead::IDelegate2<sead::Thread*, long>*, sead::Heap*, int, sead::MessageQueue::BlockType, long, int, int);
    ~DelegateThread();
    calc_(long);
};

} 
