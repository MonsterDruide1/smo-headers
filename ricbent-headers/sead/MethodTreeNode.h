#pragma once

namespace sead { 

class MethodTreeNode
{
public:
    ~MethodTreeNode();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    pushBackChild(sead::MethodTreeNode*);
    lock_();
    attachMutexRec_(sead::CriticalSection*) const;
    unlock_();
    pushFrontChild(sead::MethodTreeNode*);
    detachAll();
    call();
    callRec_();
    find(sead::MethodTreeNode::Condition&);
};

} 
