#pragma once

#include "ActorFactory.h"
#include "AreaObjFactory.h"
#include "al/factory/Factory.h"

namespace al {
    class BirdGatheringSpotArea;
    class CameraStartParamArea;
    class ExtForceArea;
    class ForceRecoveryKidsArea;
    class NpcForceMaterialCodeArea;
    class SePlayArea;
    class SeBarrierArea;
    class StainArea;
    class TrafficArea;
    class ViewCtrlArea;
    class RouteGuideArea;
    class MoveArea2D;
    class CameraStartParamAreaKids;
    class RecoveryTargetPosKidsArea;
};

static struct
{
  const char* str = "GraphicsArea";
  long a = 1;
} _graphicsAreaUnk;

/*
static al::NameToCreator<al::createArea> areaEntries[] = {
    // custom area entries
    {"GravityArea", &al::createAreaObjFunction<al::AreaObj>},
    // base area entries
    {"AlignDirectionArea", &al::createAreaObjFunction<al::AreaObj>},
    {"AudioEffectChangeArea", &al::createAreaObjFunction<al::AreaObj>},
    {"BalloonInvalidArea", &al::createAreaObjFunction<al::AreaObj>},
    {"BgmChangeArea", &al::createAreaObjFunction<al::AreaObj>},
    {"BgmSituationChangeArea", &al::createAreaObjFunction<al::AreaObj>},
    {"BgmStopArea", &al::createAreaObjFunction<al::AreaObj>},
    {"BossRaidElectricArea", &al::createAreaObjFunction<al::AreaObj>},
    {"CameraAngleVerticalRequestArea", &al::createAreaObjFunction<al::AreaObj>},
    {"CameraArea", &al::createAreaObjFunction<al::AreaObj>},
    {"CameraArea2D", &al::createAreaObjFunction<al::AreaObj>},
    {"CameraAreaKids", &al::createAreaObjFunction<al::AreaObj>},
    {"CameraInSwitchOnArea", &al::createAreaObjFunction<al::AreaObj>},
    {"CameraStopArea", &al::createAreaObjFunction<al::AreaObj>},
    {"CarryBanArea", &al::createAreaObjFunction<al::AreaObj>},
    {"ChangeStageArea", &al::createAreaObjFunction<al::AreaObj>},
    {"ClippingFarArea", &al::createAreaObjFunction<al::AreaObj>},
    {"CollectBgmPlayInvalidArea", &al::createAreaObjFunction<al::AreaObj>},
    {"CompassArea", &al::createAreaObjFunction<al::AreaObj>},
    {"DamageBallBgmEnableArea", &al::createAreaObjFunction<al::AreaObj>},
    {"DamageBallDestroyArea", &al::createAreaObjFunction<al::AreaObj>},
    {"DeathArea", &al::createAreaObjFunction<al::AreaObj>},
    {"DepthShadowArea", &al::createAreaObjFunction<al::AreaObj>},
    {"DepthShadowClipArea", &al::createAreaObjFunction<al::AreaObj>},
    {"DisablePaintDamageArea", &al::createAreaObjFunction<al::AreaObj>},
    {"DitherAnimNearInvalidArea", &al::createAreaObjFunction<al::AreaObj>},
    {"FastMoveCollisionArea", &al::createAreaObjFunction<al::AreaObj>},
    {"FireBlowerFireVisibleArea", &al::createAreaObjFunction<al::AreaObj>},
    {"ForceCameraArea", &al::createAreaObjFunction<al::AreaObj>},
    {"GpuPerfArea", &al::createAreaObjFunction<al::AreaObj>},
    {"GraphicsArea", &al::createAreaObjFunction<al::AreaObj>},
    {"GroundShadowLengthReviseArea", &al::createAreaObjFunction<al::AreaObj>},
    {"HackCancelArea", &al::createAreaObjFunction<al::AreaObj>},
    {"HackCancelSwoonProhibitArea", &al::createAreaObjFunction<al::AreaObj>},
    {"HackerCheckArea", &al::createAreaObjFunction<al::AreaObj>},
    {"HackerCheckKeepOnArea", &al::createAreaObjFunction<al::AreaObj>},
    {"HackInvalidEscapeArea", &al::createAreaObjFunction<al::AreaObj>},
    {"HosuiFloorCheckSpecialArea", &al::createAreaObjFunction<al::AreaObj>},
    {"HosuiHoverLevelKeepArea", &al::createAreaObjFunction<al::AreaObj>},
    {"HosuiRecoveryArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InformationArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InformationHackMovieArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InformationInvalidArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InvalidateInputFallArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InvalidatePressStickCameraArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InvalidateRecoveryPosArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InvalidateRocketFlowerCameraArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InvalidateRouteGuideArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InvalidateStapeMpaArea", &al::createAreaObjFunction<al::AreaObj>},
    {"InvalidateWanwanCameraArea", &al::createAreaObjFunction<al::AreaObj>},
    {"invalidateWallClimbArea", &al::createAreaObjFunction<al::AreaObj>},
    {"ItemVanishArea", &al::createAreaObjFunction<al::AreaObj>},
    {"KoopaDemoArea", &al::createAreaObjFunction<al::AreaObj>},
    {"LocationNameArea", &al::createAreaObjFunction<al::AreaObj>},
    {"LongInvalidArea", &al::createAreaObjFunction<al::AreaObj>},
    {"LowGravityArea", &al::createAreaObjFunction<al::AreaObj>},
    {"MapSnapShotArea", &al::createAreaObjFunction<al::AreaObj>},
    {"MeganePlayGuideChangeArea", &al::createAreaObjFunction<al::AreaObj>},
    {"MissRestartArea", &al::createAreaObjFunction<al::AreaObj>},
    {"MoonBasementFallObjDecorationDestructionArea", &al::createAreaObjFunction<al::AreaObj>},
    {"MotorcycleFrontSnapArea", &al::createAreaObjFunction<al::AreaObj>},
    {"MotorcycleInCheckArea", &al::createAreaObjFunction<al::AreaObj>},
    {"MotorcycleInvalidGetOffArea", &al::createAreaObjFunction<al::AreaObj>},
    {"MoveDirectionKeepArea", &al::createAreaObjFunction<al::AreaObj>},
    {"PaintDamageCheckLenSwitchArea", &al::createAreaObjFunction<al::AreaObj>},
    {"ParallaxCorrectedCubeMapArea", &al::createAreaObjFunction<al::AreaObj>},
    {"PlayerAnimArea", &al::createAreaObjFunction<al::AreaObj>},
    {"PlayerMePlayArea", &al::createAreaObjFunction<al::AreaObj>},
    {"PlayerMoveSmallPlanetArea", &al::createAreaObjFunction<al::AreaObj>},
    {"PlayerShadowLengthArea", &al::createAreaObjFunction<al::AreaObj>},
    {"PoleGrabCeilNoSnapArea", &al::createAreaObjFunction<al::AreaObj>},
    {"RaceCourseOutArea", &al::createAreaObjFunction<al::AreaObj>},
    {"RecoveryArea", &al::createAreaObjFunction<al::AreaObj>},
    {"RecoveryBanArea", &al::createAreaObjFunction<al::AreaObj>},
    {"RestartArea", &al::createAreaObjFunction<al::AreaObj>},
    {"RouteGuideArrowScaleArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SeListenerChangeArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SeSituationChangeArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SessionBgmChangeArea", &al::createAreaObjFunction<al::AreaObj>},
    {"ShibakenFollowArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SnapMoveArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SnapShotInvalidCtrlArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SphinxRideGetOffForceArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SphinxRideInCheckArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SphinxRideInCheckAreaKeepOn", &al::createAreaObjFunction<al::AreaObj>},
    {"SphinxRideInRideOffCheckAreaKeepOn", &al::createAreaObjFunction<al::AreaObj>},
    {"StealthArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SubjectiveCameraInvalidArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SubjectiveCameraInvalidCameraThroughArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchKeepOn2DArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchKeepOn2DExceptDokanInArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchKeepOnArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchKeepOnPlayerInWaterArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchKeepOnSenobiOnlyArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchKeepOnIgnoreOffAreaTarget", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchOn2DArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchOnArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchOnKoopa2DOnGroundArea", &al::createAreaObjFunction<al::AreaObj>},
    {"SwitchOnPlayerOnGroundArea", &al::createAreaObjFunction<al::AreaObj>},
    {"TalkMEssageInfoPointArea", &al::createAreaObjFunction<al::AreaObj>},
    {"TemperatureArea", &al::createAreaObjFunction<al::AreaObj>},
    {"TitleLogoArea", &al::createAreaObjFunction<al::AreaObj>},
    {"YoshiTongueSnapArea", &al::createAreaObjFunction<al::AreaObj>},
    {"YukimaruRacerNoJumpArea", &al::createAreaObjFunction<al::AreaObj>},
    {"WallCatchNoEntryArea", &al::createAreaObjFunction<al::AreaObj>},
    {"WarningBikeSideWalkInArea", &al::createAreaObjFunction<al::AreaObj>},
    {"WarpArea", &al::createAreaObjFunction<al::AreaObj>},
    {"WaterArea", &al::createAreaObjFunction<al::AreaObj>},
    {"WaterfallArea", &al::createAreaObjFunction<al::AreaObj>},
    {"WetArea", &al::createAreaObjFunction<al::AreaObj>},
    {"WorldEndBorderArea", &al::createAreaObjFunction<al::AreaObj>},
    {"YukimaruRacerHoldJumpArea", &al::createAreaObjFunction<al::AreaObj>},
    {"YukimaruRacerMinimumSpeedEnforcementArea", &al::createAreaObjFunction<al::AreaObj>},
    {"BirdGatheringSpotArea", &al::createAreaObjFunction<class BirdGatheringSpotArea>},
    {"CameraStartParamArea", &al::createAreaObjFunction<al::CameraStartParamArea>},
    {"ExtForceArea", &al::createAreaObjFunction<class ExtForceArea>},
    {"ForceRecoveryKidsArea", &al::createAreaObjFunction<class ForceRecoveryKidsArea>},
    {"NpcForceMaterialCodeArea", &al::createAreaObjFunction<class NpcForceMaterialCodeArea>},
    {"SePlayArea", &al::createAreaObjFunction<al::SePlayArea>},
    {"SeBarrierArea", &al::createAreaObjFunction<al::SeBarrierArea>},
    {"StainArea", &al::createAreaObjFunction<class StainArea>},
    {"TrafficArea", &al::createAreaObjFunction<al::TrafficArea>},
    {"ViewCtrlArea", &al::createAreaObjFunction<al::ViewCtrlArea>},
    {"RouteGuideArea", &al::createAreaObjFunction<class RouteGuideArea>},
    {"2DMoveArea", &al::createAreaObjFunction<class MoveArea2D>},
    {"CameraStartParamAreaKids", &al::createAreaObjFunction<al::CameraStartParamAreaKids>},
    {"RecoveryTargetPosKidsArea", &al::createAreaObjFunction<class RecoveryTargetPosKidsArea>}
};
*/
