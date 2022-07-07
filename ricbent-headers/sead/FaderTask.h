#pragma once

namespace sead { 

class FaderTask
{
public:
    FaderTask(sead::TaskConstructArg const&, char const*);
    ~FaderTask();
    attachDrawImpl();
    detachDrawImpl();
    pauseDraw(bool);
    pauseDrawRec(bool);
    pauseDrawChild(bool);
    draw();
    getCorrespondingMethodTreeMgrTypeInfo() const;
    getMethodTreeNode(int);
};

} 
