#pragma once

namespace al { 

class ReplayController
{
public:
    ReplayController(sead::Controller*);
    unregist();
    startReplay();
    pauseReplay();
    endReplay();
    isReplaying() const;
    isRecording() const;
    getReplayRemainFrame() const;
    calc(unsigned int, bool);
    startRecord();
    endRecord();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~ReplayController();
    checkDerivedRuntimeTypeInfoStatic(sead::RuntimeTypeInfo::Interface const*);
};

} 
