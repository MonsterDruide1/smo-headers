#pragma once

class SceneEventListenerHolder
{
public:
    SceneEventListenerHolder(char const*, int);
    add(SceneEventListener*);
    notify();
};
