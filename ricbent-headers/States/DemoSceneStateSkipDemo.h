#pragma once

class DemoSceneStateSkipDemo
{
public:
    DemoSceneStateSkipDemo(al::Scene*, al::SceneInitInfo const&, bool, SceneAudioSystemPauseController*, al::DemoSyncedEventKeeper*, al::WipeHolder*, bool);
    appear();
    kill();
    appearPlayGuideSkip();
    appearPlayGuideSkipForLoadingScene();
    hidePlayGuideSkipIfShow();
    tryChangeToSkipConfirm(al::Nerve const*);
    tryChangeToSkipConfirmForLoadingScene(al::Nerve const*, bool);
    notifyStartDemoEndFade();
    isNerveFirst(al::Nerve const*) const;
    tryOpenWipe();
    exeWait();
    exeSkipConfirm();
    tryRequestGraphicsForDemoChangeWorldScene();
    exeSkip();
    ~DemoSceneStateSkipDemo();
};
