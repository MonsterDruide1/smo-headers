#pragma once

class SceneEventFunctorListener
{
public:
    SceneEventFunctorListener(al::FunctorBase const&);
    notify();
};
