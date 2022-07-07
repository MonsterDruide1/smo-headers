#pragma once

namespace sead { 

class Graphics
{
public:
    Graphics();
    ~Graphics();
    initialize(sead::Heap*);
    lockDrawContext();
    unlockDrawContext();
    initHostIO();
    initializeDrawLockContext(sead::Heap*);
    sDefaultDeviceZScale;
    sDefaultDevicePosture;
    sDefaultDeviceZOffset;
    sInstance;
};

} 
