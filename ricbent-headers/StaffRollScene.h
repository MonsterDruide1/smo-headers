#pragma once

class StaffRollScene
{
public:
    StaffRollScene(al::WipeHolder*);
    ~StaffRollScene();
    init(al::SceneInitInfo const&);
    initRollLineData();
    appear();
    control();
    kill();
    drawMain() const;
    exeTitleLogo();
    exeRollLine();
    initCurrentRollLines();
    initSlideShowFrame();
    updateRollLine();
    updateSlideShow();
    tryChangeToSkipConfirm(al::Nerve const*);
    exeThank();
    dropAllRollLine();
    exeShowPicture();
    exeRight();
    exeConfirm();
    exeSkipProc();
    exeSkipWipe();
    killRollLine();
    getMyNerveStep() const;
    initLayout(al::LayoutInitInfo const&);
    calcNameRollTimeRate(float);
    dropCurrentToStock();
    initPlacement(al::ActorInitInfo const&);
    initPlacementSky(al::StageInfo const*, al::ActorInitInfo const&);
    initPlacementObject(al::StageInfo const*, al::ActorInitInfo const&, char const*);
    initPlacementDemo(al::StageInfo const*, al::ActorInitInfo const&);
    isCanSkip();
    getMessageSystem() const;
};
