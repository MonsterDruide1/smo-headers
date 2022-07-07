#pragma once

#include "al/PlayerHolder/PlayerHolder.h"
#include "al/area/AreaObjDirector.h"
#include "al/camera/CameraDirector.h"
#include "al/collision/CollisionDirector.h"
#include "al/hio/HioNode.h"
#include "game/System/GameSystemInfo.h"
#include "LiveActorGroup.h"


namespace al {

class ActorResourceHolder;
class ExecuteDirector;
class GravityHolder;
class GraphicsSystemInfo;
class ModelDrawBufferUpdater;
class ExecuteAsyncExecutor;
class ModelDisplayListController;
class ClippingDirector;
class HitSensorDirector;
class ScreenPointDirector;
class ShadowDirector;
class StageSwitchDirector;
class SwitchAreaDirector;
class PadRumbleDirector;
class NatureDirector;
class ModelGroup;

class LiveActorKit : public al::HioNode { // 0xf8
public:
    unsigned char gap1[0x8];
    int iVar1; // 0x8
    ActorResourceHolder* mActorResourceHolder; // 0x10
    AreaObjDirector* mAreaObjDirector; // 0x18
    ExecuteDirector* mExecuteDirector; // 0x20
    GravityHolder* mGravityHolder; // 0x28
    EffectSystem* mEffectSystem; // 0x30
    GraphicsSystemInfo* mGraphicsSystemInfo; // 0x38
    int* pIVar1; // 0x40
    ModelDrawBufferUpdater* mModelDrawBufferUpdater; // 0x48
    ExecuteAsyncExecutor* mExecuteAsyncExecutor1; // 0x50
    ExecuteAsyncExecutor* mExecuteAsyncExecutor2; // 0x58
    ModelDisplayListController* mModelDisplayListController; // 0x60
    void* unk1; // 0x68
    LiveActorGroup* mOriginalDrawingGroup; // 0x70
    CameraDirector* mCameraDirector; // 0x78
    ClippingDirector* mClippingDirector; // 0x80
    CollisionDirector* mCollisionDirector; // 0x88
    void* unk2; // 0x90
    PlayerHolder* mPlayerHolder; // 0x98
    HitSensorDirector* mHitSensorDirector; // 0xa0
    ScreenPointDirector* mScreenPointDirector; // 0xa8
    ShadowDirector* mShadowDirector; // 0xb0
    StageSwitchDirector* mStageSwitchDirector; // 0xb8
    SwitchAreaDirector* mSwitchAreaDirector; // 0xc0
    LiveActorGroup* mAllActors; // 0xc8
    unsigned char gap2[0x10];
    PadRumbleDirector* mPadRumbleDirector; // 0xe0
    NatureDirector* mNatureDirector; // 0xe8
    ModelGroup* mModelGroup; // 0xf0
};
}