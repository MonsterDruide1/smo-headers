#pragma once

namespace sead { 

class CalculateTask
{
public:
    CalculateTask(sead::TaskConstructArg const&);
    CalculateTask(sead::TaskConstructArg const&, char const*);
    ~CalculateTask();
    getCorrespondingMethodTreeMgrTypeInfo() const;
    calc();
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
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
