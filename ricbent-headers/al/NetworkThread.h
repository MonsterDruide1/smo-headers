#pragma once

namespace al { 

class NetworkThread
{
public:
    NetworkThread(char const*, sead::IDelegate2<sead::Thread*, long>*, sead::Heap*, int);
    jamMessage(long, sead::MessageQueue::BlockType);
    ~NetworkThread();
};

} 
