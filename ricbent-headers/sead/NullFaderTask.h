#pragma once

namespace sead { 

class NullFaderTask
{
public:
    NullFaderTask(sead::TaskConstructArg const&);
    getCorrespondingMethodTreeMgrTypeInfo() const;
    ~NullFaderTask();
    pauseDraw(bool);
    pauseDrawRec(bool);
    pauseDrawChild(bool);
    attachDrawImpl();
    detachDrawImpl();
    getMethodTreeNode(int);
    draw();
};

} 
