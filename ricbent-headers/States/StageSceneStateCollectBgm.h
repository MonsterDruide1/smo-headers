#pragma once

class StageSceneStateCollectBgm
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&, CollectBgmPlayer*);
    StageSceneStateCollectBgm(char const*, al::Scene*, al::DeriveActorGroup<CollectBgmSpeaker>*, al::LayoutInitInfo const&, CollectBgmPlayer*);
    updateList();
    appear();
    kill();
    changeIn(bool);
    setSelectedIdxPlayingBgm();
    changeOut(bool);
    forceStopCollectBgm();
    calcCursorPos(sead::Vector2<float>*) const;
    exeAppear();
    exeWait();
    exeDecide();
    exeReject();
    exeChangeIn();
    exeChangeOut();
    tryOpenCollectBgm();
    isEnableChangeCollectionListPage() const;
    ~StageSceneStateCollectBgm();
};
