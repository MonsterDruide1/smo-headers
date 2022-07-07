#pragma once

namespace sead { 

class CuckooClock
{
public:
    setInstance_(sead::TaskBase*);
    deleteInstance();
    CuckooClock(sead::TaskConstructArg const&);
    ~CuckooClock();
    initialize();
    updateLatest_();
    cuckoo_();
    calc();
    calcTime_(int*, int*, int*, int*) const;
    getTimeString(sead::BufferedSafeStringBase<char>*) const;
    getUtcString_(sead::BufferedSafeStringBase<char>*) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    sInstance;
};

} 
