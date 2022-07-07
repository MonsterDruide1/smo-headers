#pragma once

namespace sead { 

class FaderTaskBase
{
public:
    FaderTaskBase(sead::TaskConstructArg const&, char const*);
    onCreateDone_(sead::TaskBase*);
    calcCore_();
    enter();
    setFaderState_(sead::FaderTaskBase::FaderState);
    setFrames(int, int, int);
    startAsCreate_(sead::TaskBase::CreateArg const&);
    startCreate_();
    startAsTakeover_(sead::TaskBase*, sead::TaskBase::CreateArg const&);
    startAsTransit_(sead::TaskBase*, sead::TaskBase*);
    startAsPush_(sead::TaskBase*, sead::TaskBase::CreateArg const&);
    startAsPop_(sead::TaskBase*, sead::TaskBase*);
    fadein_();
    attachCalcImpl();
    pauseCalc(bool);
    pauseCalcRec(bool);
    pauseCalcChild(bool);
    calc();
    detachCalcImpl();
    getMethodTreeNode(int);
    ~FaderTaskBase();
    doCalc_();
    onFadeEvent_(sead::FaderTaskBase::FadeEvent const&);
};

} 
