#pragma once

namespace nn { namespace nex { 

class JobQueue
{
public:
    JobQueue();
    ~JobQueue();
    Queue(nn::nex::Job*, bool);
    PopFront();
    Front();
    IsEmpty() const;
    GetLength() const;
    Cancel(nn::nex::Job*);
    CancelAll();
    WaitForEmptyQueues() const;
};

} } 
