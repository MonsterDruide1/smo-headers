#pragma once

namespace sead { 

class InfLoopChecker
{
public:
    setInstance_(sead::TaskBase*);
    deleteInstance();
    InfLoopChecker(sead::TaskConstructArg const&);
    ~InfLoopChecker();
    countUp();
    onInfLoop_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    prepare();
    calc();
    sInstance;
};

} 
