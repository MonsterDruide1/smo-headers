#pragma once

class WorldResourceLoader
{
public:
    WorldResourceLoader(GameDataHolder*);
    loadResource();
    ~WorldResourceLoader();
    cancelLoadWorldResource();
    tryDestroyWorldResource();
    requestLoadWorldHomeStageResource(int, int);
    isEndLoadWorldResource() const;
    requestLoadWorldResourceCommon(int);
    requestLoadWorldResource(int);
    createResourcePlayer();
    tryDestroyWorldResourceOnlyCap();
    calcLoadPercent() const;
    getLoadWorldId() const;
    tryLoadResource(char const*, char const*, char const*);
    loadWorldResource(int, int, bool, char const*);
    calcWorldResourceHeapSize() const;
};
