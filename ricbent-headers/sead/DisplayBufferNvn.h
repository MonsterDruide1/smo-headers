#pragma once

namespace sead { 

class DisplayBufferNvn
{
public:
    DisplayBufferNvn();
    presentTextureAndAcquireNext();
    waitAcquireDone();
    setPresentInterval(unsigned char);
    setTripleBuffer(bool);
    setWindowCrop(int, int, int, int);
    getWindowCrop(int*, int*, int*, int*) const;
    applyChangeWindowCrop();
    initializeImpl_(sead::Heap*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
