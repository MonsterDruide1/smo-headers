#pragma once

namespace al { 

class MemorySystem
{
public:
    MemorySystem(sead::Heap*);
    allocFailedCallbackFunc(sead::HeapMgr::AllocFailedCallbackArg const*);
    createSequenceHeap();
    freeAllSequenceHeap();
    printSequenceHeap();
    createSceneHeap(char const*, bool);
    createSceneResourceHeap(char const*, bool);
    destroySceneHeap();
    destroySceneResourceHeap();
    createCourseSelectHeap();
    destroyCourseSelectHeap();
    createWorldResourceHeap();
    destroyWorldResourceHeap();
    freeAllPlayerHeap();
    tryFindNamedHeap(char const*) const;
    findNamedHeap(char const*) const;
    addNamedHeap(sead::Heap*, char const*);
    removeNamedHeap(char const*);
};

} 
