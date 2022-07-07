#pragma once

namespace al { 

class ExecuteTableHolderUpdate
{
public:
    ExecuteTableHolderUpdate();
    ~ExecuteTableHolderUpdate();
    init(char const*, al::ExecuteSystemInitInfo const&, al::ExecuteOrder const*, int);
    registerExecutorListActor(al::ExecutorListActorExecuteBase*);
    registerExecutorListLayout(al::ExecutorListLayoutUpdate*);
    registerExecutorListUser(al::ExecutorListIUseExecutorUpdate*);
    registerExecutorListFunctor(al::ExecutorListFunctor*);
    registerExecutorListAll(al::ExecutorListBase*);
    tryRegisterActor(al::LiveActor*, char const*);
    tryRegisterLayout(al::LayoutActor*, char const*);
    tryRegisterUser(al::IUseExecutor*, char const*);
    tryRegisterFunctor(al::FunctorBase const&, char const*);
    createExecutorListTable();
    execute() const;
    executeList(char const*) const;
};

} 
