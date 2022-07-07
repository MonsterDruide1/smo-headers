#pragma once

namespace sead { 

class MessageQueue
{
public:
    MessageQueue();
    ~MessageQueue();
    allocate(int, sead::Heap*);
    free();
    push(long, sead::MessageQueue::BlockType);
    pop(sead::MessageQueue::BlockType);
    peek(sead::MessageQueue::BlockType) const;
    jam(long, sead::MessageQueue::BlockType);
};

} 
