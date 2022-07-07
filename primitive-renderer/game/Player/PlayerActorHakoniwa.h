#pragma once
/**
 * @file PlayerActorBase.h
 * @brief Main Class for the PlayerActor (Mario)
 * Player Pose: TQGMSV
*  Vtable loc: 1D780C0
*/

#include "game/Interfaces/IUseDimension.h"
#include "al/actor/ActorDimensionKeeper.h"
#include "al/actor/ActorInitInfo.h"
#include "PlayerActorBase.h"
#include "PlayerPuppet.h"
#include "PlayerInput.h"
#include "PlayerAnimator.h"
#include "HackCap.h"
#include "PlayerModelKeeper.h"
#include "PlayerColliderHakoniwa.h"
#include "PlayerConst.h"
#include "PlayerHackKeeper.h"
#include "PlayerInfo.h"
#include "PlayerModelChangerHakoniwa.h"
#include "PlayerFormSensorCollisionArranger.h"
#include "PlayerInitInfo.h"
#include "PlayerRecoverySafetyPoint.h"
#include "PlayerStates.h"

#include "Attacks/PlayerSpinCapAttack.h"

//#define PACTORSIZE 0xC8
/*
class PlayerActorHakoniwa : public PlayerActorBase , public IUseDimension {
    public: 
        int *getPortNo(void) const;
        PlayerHackKeeper *getPlayerHackKeeper() const;
        void attackSensor(al::HitSensor *target, al::HitSensor *source);
        void startDemoPuppetable(void);
        void startPlayerPuppet(void);
        void initPlayer(al::ActorInitInfo const&, PlayerInitInfo const&);

        unsigned char padding_E8[0xE0 - PACTORSIZE];
        int portNo; // 0xE8
        unsigned char padding_130[0x38];
        PlayerInfo *mPlayerInfo; // 0x128
        PlayerConst *mPlayerConst; // 0x130
        PlayerInput *mPlayerInput; //0x138 
        unsigned char padding_148[0x8]; // PlayerTrigger
        HackCap *mHackCap; // 0x148
        ActorDimensionKeeper *mDimKeeper; // 0x150
        PlayerModelKeeper *mPlayerModelKeeper; // 0x158
        PlayerModelChangerHakoniwa *mModelChanger; // 0x160
        PlayerAnimator *mPlayerAnimator; // 0x168 
        PlayerColliderHakoniwa *mPlayerCollider; // 0x170
        PlayerPuppet *mPlayerPuppet; // 0x178
        // 0x180 PlayerAreaChecker
        // 0x188 WaterSurfaceFinder
        // 0x190 unk
        // 0x198 unk
        // 0x1A0 unk
        // 0x1A8 unk
        // 0x1B0 unk
        // 0x1B8 unk
        // 0x1C0 unk
        // 0x1C8 unk
        // 0x1D0 unk
        // 0x1D8 unk
        // 0x1E0 unk
        // 0x1E8 unk
        // 0x1F0 unk
        // 0x1F8 PlayerBindKeeper
        unsigned char padding_208[0x208 - 0x180];
        PlayerHackKeeper *mHackKeeper; // 0x208
        PlayerFormSensorCollisionArranger *mCollArranger; // 0x210
        void *unkPtr2; // 0x218
        void *unkPtr3; // 0x220
        PlayerSpinCapAttack *mSpinCapAttack; // 0x228
        unsigned char padding[0x270 - 0x228];
        PlayerRecoverySafetyPoint *mPlayerRecoverPoint; // 0x270
        
};

*/

namespace al {
    class WaterSurfaceFinder;
    class FootPrintHolder;
}

class PlayerContinuousJump;
class PlayerContinuousLongJump;
class PlayerCounterAfterUpperPunch;
class PlayerCounterQuickTurnJump;
class PlayerJumpMessageRequest;
class PlayerSandSinkAffect;
class PlayerActionDiveInWater;
class PlayerEffect;
class PlayerPushReceiver;
class PlayerHitPush;
class PlayerExternalVelocity;
class PlayerRippleGenerator;
class GaugeAir;
class WaterSurfaceShadow;
class PlayerSeCtrl;
class PlayerStateWait;
class PlayerStateSquat;
class PlayerStateRunHakoniwa2D3D;
class PlayerStateSlope;
class PlayerStateSpinCap;
class PlayerStateCapCatchPop;
class PlayerStateWallAir;
class PlayerStateHipDrop;
class PlayerStateHeadSliding;
class PlayerStateLongJump;
class PlayerStateFallHakoniwa;
class PlayerStateSandSink;
class ActorStateSandGeyser;
class PlayerStateRise;
class PlayerStateSwim;
class PlayerStateDamageSwim;
class PlayerStateDamageFire;
class PlayerStatePress;
class PlayerStateBind;
class PlayerStateHack;
class PlayerStateEndHack;
class PlayerStateCameraSubjective;
class PlayerStateAbyss;
class PlayerJudgeAirForceCount;
class PlayerJudgeCameraSubjective;
class PlayerJudgeCapCatchPop;
//class PlayerJudgeDeadWipeStart;
class PlayerJudgeDirectRolling;
class PlayerJudgeEnableStandUp;
class PlayerJudgeForceLand;
class PlayerJudgeForceSlopeSlide;
class PlayerJudgeForceRolling;
class PlayerJudgeGrabCeil;
class PlayerJudgeInWater;
class PlayerJudgeInvalidateInputFall;
class PlayerJudgeLongFall;
class PlayerJudgeOutInWater;
class PlayerJudgeRecoveryLifeFast;
class PlayerJudgeSandSink;
class PlayerJudgeSpeedCheckFall;
class PlayerJudgeStartHipDrop;
class PlayerJudgeStartRise;
class PlayerJudgeStartRolling;
class PlayerJudgeStartRun;
class PlayerJudgeStartSquat;
class PlayerJudgeStartWaterSurfaceRun;
class PlayerJudgeSlopeSlide;
class PlayerJudgePoleClimb;
class PlayerJudgePreInputJump;
class PlayerJudgePreInputCapThrow;
class PlayerJudgePreInputHackAction;
class HackCapJudgePreInputHoveringJump;
class HackCapJudgePreInputSeparateThrow;
class HackCapJudgePreInputSeparateJump;
class PlayerJudgeWallCatch;
class PlayerJudgeWallCatchInputDir;
class PlayerJudgeWallHitDown;
class PlayerJudgeWallHitDownForceRun;
class PlayerJudgeWallHitDownRolling;
class PlayerJudgeWallKeep;


class PlayerActorHakoniwa : public PlayerActorBase, public IUseDimension {
    public: 
    
    void attackSensor(al::HitSensor*, al::HitSensor*);
    void cancelHackPlayerPupperDemo();
    void checkDamageFromCollision();
    bool checkDeathArea();
    void control();
    void endDemo();
    void endDemoHack();
    void endDemoKeepBind();
    void endDemoKeepCarry();
    void endDemoMainShineGet();
    void endDemoPuppetable();
    void endDemoShineGet();
    void endPlayerPuppet();

    // all nerve functions
    void exeAbyss();
    void exeBind();
    void exeCamera();
    void exeCapCatchPop();
    void exeDamage();
    void exeDamageFire();
    void exeDamageSwim();
    void exeDead();
    void exeDemo();
    void exeEndHack();
    void exeFall();
    void exeGrabCeil();
    void exeHack();
    void exeHeadSliding();
    void exeHipDrop();
    void exeJump();
    void exeLongJump();
    void exePoleClimb();
    void exePress();
    void exeRise();
    void exeRolling();
    void exeRun();
    void exeSandGeyser();
    void exeSandSink();
    void exeSlope();
    void exeSpinCap();
    void exeSquat();
    void exeSwim();
    void exeWait();
    void exeWallAir();
    void exeWallCatch();

    void executeAfterCapTarget();
    void executePreMovementNerveChange();
    

    _BYTE gap_0[0x58];
    PlayerInfo *mPlayerInfo;                                                // 0x128
    PlayerConst *mPlayerConst;                                              // 0x130
    PlayerInput *mPlayerInput;                                              // 0x138
    PlayerTrigger *mPlayerTrigger;                                          // 0x140
    HackCap *mHackCap;                                                      // 0x148
    ActorDimensionKeeper *mActorDimensionKeeper;                            // 0x150
    PlayerModelHolder *mModelHolder;                                        // 0x158
    PlayerModelChangerHakoniwa *mModelChangerHakoniwa;                      // 0x160
    PlayerAnimator *mAnimator;                                              // 0x168
    PlayerColliderHakoniwa *mColliderHakoniwa;                              // 0x170
    PlayerPuppet *mPuppet;                                                  // 0x178
    PlayerAreaChecker *mAreaChecker;                                        // 0x180
    al::WaterSurfaceFinder *mSurfaceFinder;                                 // 0x188
    PlayerOxygen *mOxygen;                                                  // 0x190
    PlayerDamageKeeper *mDamageKeeper;                                      // 0x198
    PlayerDemoActionFlag *mDemoActionFlag;                                  // 0x1A0
    PlayerCapActionHistory *mCapActionHistory;                              // 0x1A8
    PlayerCapManHeroEyesControl *mCapManHeroEyesControl;                    // 0x1B0
    PlayerContinuousJump *mContinuousJump;                                  // 0x1B8
    PlayerContinuousLongJump *mContinuousLongJump;                          // 0x1C0
    PlayerCounterAfterUpperPunch *mCounterAfterUpperPunch;                  // 0x1C8
    PlayerCounterAfterCapCatch *mCounterAfterCapCatch;                      // 0x1D0
    PlayerCounterIceWater *mCounterIceWater;                                // 0x1D8
    PlayerCounterQuickTurnJump *mCounterQuickTurnJump;                      // 0x1E0
    PlayerWallActionHistory *mWallActionHistory;                            // 0x1E8
    PlayerBindKeeper *mBindKeeper;                                          // 0x1F0
    PlayerCarryKeeper *mCarryKeeper;                                        // 0x1F8
    PlayerEquipmentUser *mEquipmentUser;                                    // 0x200
    PlayerHackKeeper *mHackKeeper;                                          // 0x208
    PlayerFormSensorCollisionArranger *mFormSensorCollisionArranger;        // 0x210
    PlayerJumpMessageRequest *mJumpMessageRequest;                          // 0x218
    PlayerSandSinkAffect *mSandSinkAffect;                                  // 0x220
    PlayerSpinCapAttack *mSpinCapAttack;                                    // 0x228
    PlayerActionDiveInWater *mActionDiveInWater;                            // 0x230
    PlayerEffect *mEffect;                                                  // 0x238
    PlayerEyeSensorHitHolder *mEyeSensorHitHolder;                          // 0x240
    PlayerPushReceiver *mPushReceiver;                                      // 0x248
    PlayerHitPush *mHitPush;                                                // 0x250
    PlayerExternalVelocity *mExternalVelocity;                              // 0x258
    PlayerJointControlKeeper *mJointControlKeeper;                          // 0x260
    PlayerPainPartsKeeper *mPainPartsKeeper;                                // 0x268
    PlayerRecoverySafetyPoint *mRecoverySafetyPoint;                        // 0x270
    PlayerRippleGenerator *mRippleGenerator;                                // 0x278
    PlayerSeparateCapFlag *mSeparateCapFlag;                                // 0x280
    PlayerWetControl *mWetControl;                                          // 0x288
    PlayerStainControl *mStainControl;                                      // 0x290
    al::FootPrintHolder *mFootPrintHolder;                                  // 0x298
    GaugeAir *mGaugeAir;                                                    // 0x2A0
    WaterSurfaceShadow *mWaterSurfaceShadow;                                // 0x2A8
    WorldEndBorderKeeper *mWorldEndBorderKeeper;                            // 0x2B0
    al::HitSensor *unkSensor;                                               // 0x2B8
    PlayerSeCtrl *mPlayerSeCtrl;                                            // 0x2C0
    al::HitSensor *unkSensor2;                                              // 0x2C8
    bool *isLongShadow;                                                     // 0x2D0

    // States                    
    PlayerStateWait *stateWait;                                             // 0x2D8
    PlayerStateSquat *stateSquat;                                           // 0x2E0
    PlayerStateRunHakoniwa2D3D *stateRunHakoniwa2D3D;                       // 0x2E8
    PlayerStateSlope *stateSlope;                                           // 0x2F0
    PlayerStateRolling *stateRolling;                                       // 0x2F8
    PlayerStateSpinCap *stateSpinCap;                                       // 0x300
    PlayerStateJump *stateJump;                                             // 0x308
    PlayerStateCapCatchPop *stateCapCatchPop;                               // 0x310
    PlayerStateWallAir *stateWallAir;                                       // 0x318
    PlayerStateWallCatch *stateWallCatch;                                   // 0x320
    PlayerStateGrabCeil *stateGrabCeil;                                     // 0x328
    PlayerStatePoleClimb *statePoleClimb;                                   // 0x330
    PlayerStateHipDrop *stateHipDrop;                                       // 0x338
    PlayerStateHeadSliding *stateHeadSliding;                               // 0x340
    PlayerStateLongJump *stateLongJump;                                     // 0x348
    PlayerStateFallHakoniwa *stateFallHakoniwa;                             // 0x350
    PlayerStateSandSink *stateSandSink;                                     // 0x358
    ActorStateSandGeyser *stateSandGeyser;                                  // 0x360
    PlayerStateRise *stateRise;                                             // 0x368
    PlayerStateSwim *stateSwim;                                             // 0x370
    PlayerStateDamageLife *stateDamageLife;                                 // 0x378
    PlayerStateDamageSwim *stateDamageSwim;                                 // 0x380
    PlayerStateDamageFire *stateDamageFire;                                 // 0x388
    PlayerStatePress *statePress;                                           // 0x390
    PlayerStateBind *stateBind;                                             // 0x398
    PlayerStateHack *stateHack;                                             // 0x3A0
    PlayerStateEndHack *stateEndHack;                                       // 0x3A8
    PlayerStateCameraSubjective *stateCameraSubjective;                     // 0x3B0
    PlayerStateAbyss *stateAbyss;                                           // 0x3B8

    // Judges                    
    PlayerJudgeAirForceCount *judgeAirForceCount;                           // 0x3C0
    PlayerJudgeCameraSubjective *judgeCameraSubjective;                     // 0x3C8
    PlayerJudgeCapCatchPop *judgeCapCatchPop;                               // 0x3D0
    PlayerJudgeDeadWipeStart *judgeDeadWipeStart;                           // 0x3D8
    PlayerJudgeDirectRolling *judgeDirectRolling;                           // 0x3E0
    PlayerJudgeEnableStandUp *judgeEnableStandUp;                           // 0x3E8
    PlayerJudgeForceLand *judgeForceLand;                                   // 0x3F0
    PlayerJudgeForceSlopeSlide *judgeForceSlopeSlide;                       // 0x3F8
    PlayerJudgeForceRolling *judgeForceRolling;                             // 0x400
    PlayerJudgeGrabCeil *judgeGrabCeil;                                     // 0x408
    PlayerJudgeInWater *judgeInWater;                                       // 0x410
    PlayerJudgeInWater *judgeInWater2;                                      // 0x418
    PlayerJudgeInWater *judgeInWater3;                                      // 0x420
    PlayerJudgeInWater *judgeInWater4;                                      // 0x428
    PlayerJudgeInvalidateInputFall *judgeInvalidateInputFall;               // 0x430
    PlayerJudgeLongFall *judgeLongFall;                                     // 0x438
    PlayerJudgeOutInWater *judgeOutInWater;                                 // 0x440
    PlayerJudgeRecoveryLifeFast *judgeRecoveryLifeFast;                     // 0x448
    PlayerJudgeSandSink *judgeSandSink;                                     // 0x450
    PlayerJudgeSpeedCheckFall *judgeSpeedCheckFall;                         // 0x458
    PlayerJudgeStartHipDrop *judgeStartHipDrop;                             // 0x460
    PlayerJudgeStartRise *judgeStartRise;                                   // 0x468
    PlayerJudgeStartRolling *judgeStartRolling;                             // 0x470
    PlayerJudgeStartRun *judgeStartRun;                                     // 0x478
    PlayerJudgeStartSquat *judgeStartSquat;                                 // 0x480
    PlayerJudgeStartWaterSurfaceRun *judgeStartWaterSurfaceRun;             // 0x488 
    PlayerJudgeSlopeSlide *judgeSlopeSlide;                                 // 0x490
    PlayerJudgePoleClimb *judgePoleClimb;                                   // 0x498
    PlayerJudgePreInputJump *judgePreInputJump;                             // 0x4A0
    PlayerJudgePreInputCapThrow *judgePreInputCapThrow;                     // 0x4A8
    PlayerJudgePreInputHackAction *judgePreInputHackAction;                 // 0x4B0
    HackCapJudgePreInputHoveringJump *judgeHackCapPreInputHoveringJump;     // 0x4B8
    HackCapJudgePreInputSeparateThrow *judgeHackCapPreInputSeparateThrow;   // 0x4C0
    HackCapJudgePreInputSeparateJump *judgeHackCapPreInputSeparateJump;     // 0x4C8
    PlayerJudgeWallCatch *judgeWallCatch;                                   // 0x4D0
    PlayerJudgeWallCatchInputDir *judgeWallCatchInputDir;                   // 0x4D8
    PlayerJudgeWallHitDown *judgeWallHitDown;                               // 0x4E0
    PlayerJudgeWallHitDownForceRun *judgeWallHitDownForceRun;               // 0x4E8
    PlayerJudgeWallHitDownRolling *judgeWallHitDownRolling;                 // 0x4F0
    PlayerJudgeWallKeep *judgeWallKeep;                                     // 0x4F8

    int field_500;                                                          // 0x500
    int field_504;                                                          // 0x504
};