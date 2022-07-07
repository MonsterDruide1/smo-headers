#pragma once

namespace sead { 

class Task
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    Task(sead::TaskConstructArg const&);
    Task(sead::TaskConstructArg const&, char const*);
    ~Task();
    getCorrespondingMethodTreeMgrTypeInfo() const;
    calc();
    draw();
    attachCalcImpl();
    attachDrawImpl();
    detachCalcImpl();
    detachDrawImpl();
    pauseCalc(bool);
    pauseDraw(bool);
    pauseCalcRec(bool);
    pauseDrawRec(bool);
    pauseCalcChild(bool);
    pauseDrawChild(bool);
    getMethodTreeNode(int);
};

} 
