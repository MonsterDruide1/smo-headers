#pragma once

namespace sead { 

class StackSymbolResolver
{
public:
    StackSymbolResolver();
    ~StackSymbolResolver();
    loadMapFile(sead::Heap*, sead::SafeStringBase<char> const&);
    unload();
    resolveOne(sead::BufferedSafeStringBase<char>*, sead::BufferedSafeStringBase<char>*, unsigned long) const;
    isIllegalSymbolAddress(unsigned long, unsigned long);
    resolve(sead::Buffer<sead::BufferedSafeStringBase<char>*>*, sead::Buffer<sead::BufferedSafeStringBase<char>*>*, sead::StackTraceBase const&) const;
};

} 
