#pragma once

namespace al { 

class ActorInitInfo
{
public:
    ActorInitInfo();
    initNew(al::PlacementInfo const*, al::LayoutInitInfo const*, al::LiveActorGroup*, al::ActorFactory const*, al::ActorResourceHolder*, al::AreaObjDirector*, al::AudioDirector*, al::CameraDirector*, al::ClippingDirector*, al::CollisionDirector*, al::DemoDirector*, al::EffectSystemInfo*, al::ExecuteDirector*, al::GameDataHolderBase*, al::GravityHolder*, al::HitSensorDirector*, al::ItemDirectorBase*, al::NatureDirector*, al::GamePadSystem const*, al::PadRumbleDirector*, al::PlayerHolder*, al::SceneObjHolder*, al::SceneMsgCtrl*, al::SceneStopCtrl*, al::ScreenCoverCtrl*, al::ScreenPointDirector*, al::ShadowDirector*, al::StageSwitchDirector*, al::ModelGroup*, al::GraphicsSystemInfo*, al::ModelDrawBufferCounter*, al::LiveActorGroup*);
    initViewIdSelf(al::PlacementInfo const*, al::ActorInitInfo const&);
    copyHostInfo(al::ActorInitInfo const&, al::PlacementInfo const*);
    initViewIdHost(al::PlacementInfo const*, al::ActorInitInfo const&);
    initViewIdHostActor(al::ActorInitInfo const&, al::LiveActor const*);
    initNoViewId(al::PlacementInfo const*, al::ActorInitInfo const&);
};

} 
