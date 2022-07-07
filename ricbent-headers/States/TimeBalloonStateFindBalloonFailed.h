#pragma once

class TimeBalloonStateFindBalloonFailed
{
public:
    TimeBalloonStateFindBalloonFailed(StageSceneStateTimeBalloon*, TimeBalloonNpc*, al::SimpleLayoutAppearWaitEnd*, al::LayoutActor*, al::SimpleLayoutAppearWaitEnd*, al::ActorInitInfo const&, TimeBalloonDistanceLayout*);
    init();
    control();
    exeFailedWait();
    exeFailedEnd();
    exeViewAroundStageDefaultCamera();
    exeViewAroundStageDecideWait();
    exeViewAroundStageEnd();
    isNerveFailedEnd() const;
    isNerveViewAroundStageEnd() const;
    setNerveFailedWait();
    setNerveViewAroundStage();
    ~TimeBalloonStateFindBalloonFailed();
};
