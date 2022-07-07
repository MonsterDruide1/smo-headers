#pragma once

class E3ResourceLoader
{
public:
    E3ResourceLoader();
    loadHomeStageResource();
    loadWorldResource();
    ~E3ResourceLoader();
    cancelLoadWorldResource();
    requestLoadWorldHomeStageResource();
    isEndLoadWorldHomeStageResource() const;
    requestLoadWorldResource(int);
    isEndLoadAny() const;
    tryCreateExHeap(int);
    tryDestroyWorldResource(sead::Heap*);
    printHeapInfo() const;
    loadHomeStageResourceByWorld(char const*, sead::Heap*, int, int);
};
