#pragma once

namespace sead { 

class Thread
{
public:
    destroy();
    getMessageQueue() const;
    quitAndDestroySingleThread(bool);
    getBlockType() const;
    getStackSize() const;
    Thread(sead::SafeStringBase<char> const&, sead::Heap*, int, sead::MessageQueue::BlockType, long, int, int);
    ninThreadFunc_(void*);
    Thread(sead::Heap*, nn::os::ThreadType*, unsigned int);
    setAffinity(sead::CoreIdMask const&);
    ~Thread();
    sleep(sead::TickSpan);
    yield();
    start();
    waitDone();
    getStackCheckStartAddress_() const;
    setPriority(int);
    getPriority() const;
    run_();
    checkStackOverFlow(char const*, int) const;
    checkStackEndCorruption(char const*, int) const;
    checkStackPointerOverFlow(char const*, int) const;
    setStackOverflowExceptionEnable(bool);
    initStackCheck_();
    initStackCheckWithCurrentStackPointer_();
    calcStackUsedSizePeak() const;
    sendMessage(long, sead::MessageQueue::BlockType);
    recvMessage(sead::MessageQueue::BlockType);
    quit(bool);
    quitAndWaitDoneSingleThread(bool);
    cDefaultPriority;
};

} 
