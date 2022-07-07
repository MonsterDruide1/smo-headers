#pragma once

namespace sead { 

class SingleScreenMethodTreeMgr
{
public:
    SingleScreenMethodTreeMgr();
    ~SingleScreenMethodTreeMgr();
    attachMethod(int, sead::MethodTreeNode*);
    getRootMethodTreeNode(int);
    pauseAll(bool);
    pauseAppCalc(bool);
    calc();
    draw();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
