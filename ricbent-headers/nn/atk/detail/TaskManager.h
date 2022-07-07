#pragma once

namespace nn { namespace atk { namespace detail { 

class TaskManager
{
public:
    GetInstance();
    ~TaskManager();
    TaskManager();
    Initialize(bool);
    Finalize();
    AppendTask(nn::atk::detail::Task*, nn::atk::detail::TaskManager::TaskPriority);
    GetNextTask(nn::atk::detail::TaskManager::TaskPriority, bool);
    PopTask();
    PeekTask();
    ExecuteTask();
    CancelTask(nn::atk::detail::Task*);
    TryRemoveTask(nn::atk::detail::Task*);
    CancelTaskById(unsigned int);
    RemoveTaskById(unsigned int);
    CancelAllTask();
    WaitTask();
    CancelWaitTask();
    PriorityCount;
    ThreadMessageBufferSize;
};

} } } 
