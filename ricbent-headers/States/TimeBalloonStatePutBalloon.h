#pragma once

class TimeBalloonStatePutBalloon
{
public:
    TimeBalloonStatePutBalloon(StageSceneStateTimeBalloon*, TimeBalloonNpc*, TimeBalloonBalloon*, TimeBalloonCircle*, al::SimpleLayoutAppearWaitEnd*, al::LayoutActor*, TimeBalloonTimer*, al::SimpleLayoutAppearWaitEnd*, al::ActorInitInfo const&);
    init();
    exeExplain();
    exeStandby();
    prepareStart();
    exePlay();
    isEnablePutBalloon() const;
    exeRequestTimeUp();
    exeRequestPut();
    exePause();
    setNerveExplain();
    setNerveStandby();
    setNerveResume();
    isNerveRequestTimeUp() const;
    isNerveRequestPut() const;
    isPlay() const;
    startCameraPutBalloon();
    ~TimeBalloonStatePutBalloon();
};
