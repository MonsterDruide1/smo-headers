#pragma once

namespace agl { 

class DisplayList
{
public:
    DisplayList();
    setControlMemory(void*, unsigned long);
    clear();
    ~DisplayList();
    setBuffer(agl::GPUMemAddr<unsigned char>, unsigned long);
    setValidSize_(unsigned long);
    copyTo(agl::DisplayList*) const;
    copyTo(agl::ExecuteDisplayList*) const;
    beginDisplayList();
    outOfMemoryCallback_(NVNcommandBuffer*, NVNcommandBufferMemoryEvent, unsigned long, void*);
    endDisplayList();
    beginDisplayListBuffer(agl::GPUMemAddr<unsigned char>, unsigned long, bool);
    endDisplayListBuffer(sead::Heap*);
    adjustValidSize();
    invalidateCPUCache() const;
    callDirect(agl::DrawContext*) const;
    dump() const;
    suspend(void**);
    resume(void*, unsigned long);
    calcRemainingSize();
    calcUsedSize() const;
    genMessage(sead::hostio::Context*);
};

} 
