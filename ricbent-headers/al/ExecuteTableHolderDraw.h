#pragma once

namespace al { 

class ExecuteTableHolderDraw
{
public:
    ExecuteTableHolderDraw();
    ~ExecuteTableHolderDraw();
    init(char const*, al::ExecuteSystemInitInfo const&, al::ExecuteOrder const*, int);
    registerExecutorListActorModel(al::ExecutorListActorModelDrawBase*);
    registerExecutorListActor(al::ExecutorListActorDraw*);
    registerExecutorListLayout(al::ExecutorListLayoutDrawBase*);
    registerExecutorListUser(al::ExecutorListIUseExecutorDraw*);
    registerExecutorListFunctor(al::ExecutorListFunctor*);
    registerExecutorListAll(al::ExecutorListBase*);
    tryRegisterActor(al::LiveActor*, char const*);
    tryRegisterActorModel(al::LiveActor*, char const*);
    tryRegisterLayout(al::LayoutActor*, char const*);
    tryRegisterUser(al::IUseExecutor*, char const*);
    tryRegisterFunctor(al::FunctorBase const&, char const*);
    createExecutorListTable();
    execute() const;
    executeList(char const*) const;
    isActive() const;
};

} 
