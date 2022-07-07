#pragma once

namespace al { 

class ExecuteDirector
{
public:
    ExecuteDirector(int);
    ~ExecuteDirector();
    init(al::ExecuteSystemInitInfo const&);
    registerActorUpdate(al::LiveActor*, char const*);
    registerActorDraw(al::LiveActor*, char const*);
    registerActorModelDraw(al::LiveActor*, char const*);
    registerLayoutUpdate(al::LayoutActor*, char const*);
    registerLayoutDraw(al::LayoutActor*, char const*);
    registerUser(al::IUseExecutor*, char const*);
    registerFunctor(al::FunctorBase const&, char const*);
    registerFunctorDraw(al::FunctorBase const&, char const*);
    createExecutorListTable();
    execute(char const*) const;
    executeList(char const*, char const*) const;
    draw(char const*) const;
    drawList(char const*, char const*) const;
    isActiveDraw(char const*) const;
};

} 
