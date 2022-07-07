#pragma once

namespace al { 

class SceneCreator
{
public:
    SceneCreator(al::GameSystemInfo const*, al::GameDataHolderBase*, al::ScreenCaptureExecutor*, alSceneFunction::SceneFactory*, al::AudioDirector*);
    createScene(char const*, char const*, int, char const*, bool, int);
    setSceneAndThreadInit(al::Scene*, char const*, int, char const*, int, sead::Heap*);
    setSceneAndInit(al::Scene*, char const*, int, char const*);
    tryEndInitThread();
    isExistInitThread() const;
};

} 
