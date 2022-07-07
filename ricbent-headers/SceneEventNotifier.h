#pragma once

class SceneEventNotifier
{
public:
    SceneEventNotifier();
    initListenerHolderList(SceneEventNotifierInitTable*, int);
    addListener(char const*, SceneEventListener*);
    findSceneEventListenerHolder(char const*);
    notify(char const*);
    tryFindSceneEventListenerHolder(char const*);
    ~SceneEventNotifier();
};
