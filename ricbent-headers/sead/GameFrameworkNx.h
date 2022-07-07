#pragma once

namespace sead { 

class GameFrameworkNx
{
public:
    initialize(sead::Framework::InitializeArg const&);
    GameFrameworkNx(sead::GameFrameworkNx::CreateArg const&);
    ~GameFrameworkNx();
    initializeGraphicsSystem(sead::Heap*, sead::Vector2<float> const&);
    outOfMemoryCallback_(NVNcommandBuffer*, NVNcommandBufferMemoryEvent, unsigned long, void*);
    presentAsync_(sead::Thread*, long);
    getAcquiredDisplayBufferTexture() const;
    setVBlankWaitInterval(unsigned int);
    requestChangeUseGPU(bool);
    getGraphicsDevToolsAllocatorTotalFreeSize() const;
    initRun_(sead::Heap*);
    runImpl_();
    createMethodTreeMgr_(sead::Heap*);
    mainLoop_();
    procFrame_();
    procDraw_();
    procCalc_();
    present_();
    waitVsyncEvent_();
    swapBuffer_();
    clearFrameBuffers_(int);
    waitForGpuDone_();
    setGpuTimeStamp_();
    getMethodFrameBuffer(int) const;
    getMethodLogicalFrameBuffer(int) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    calcFps();
    setCaption(sead::SafeStringBase<char> const&);
};

} 
