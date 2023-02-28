#pragma once

//#include <container/seadPtrArray.h>
#include <math/seadVector.h>
#include "al/LiveActor/LiveActor.h"

class Shine;
class GrowFlowerPotStateReactionWater;

class GrowFlowerPot : public al::LiveActor
{
public:
    void tryMaxGrowLevel();
    void startGrow();
    void growSetting();
    void exeGrow();

//private:
    void* /*sead::PtrArray<void*>*/ mGrowFlowerStems; //use correct type instead
    const al::PlacementId *mPlacementId;
    Shine *mShinePtrFromSeed;
    ulong *mGrowFlowerTime;
    int growProgress[2];
    void *gap2[7];
    sead::Vector3<float> *mGrowFlowerStemTranss;
    GrowFlowerPotStateReactionWater *mStateReactionWater;
    void *gap3[1];
    int gap4;
    int mSecondsPerBlock;
    bool gap5[1];
    bool mIsGrowGamaneBullet;
    bool gap6[1];
    bool filler[1];
    int filler2[1];
};
