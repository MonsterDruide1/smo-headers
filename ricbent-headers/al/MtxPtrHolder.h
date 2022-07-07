#pragma once

namespace al { 

class MtxPtrHolder
{
public:
    MtxPtrHolder();
    init(int);
    setMtxPtrAndName(int, char const*, sead::Matrix34<float> const*);
    setMtxPtr(char const*, sead::Matrix34<float> const*);
    findIndex(char const*) const;
    findMtxPtr(char const*) const;
    tryFindMtxPtr(char const*) const;
    tryFindIndex(char const*) const;
};

} 
