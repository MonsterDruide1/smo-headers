#pragma once

class TimeBalloonStateFindBalloon
{
public:
    TimeBalloonStateFindBalloon(StageSceneStateTimeBalloon*, TimeBalloonNpc*, TimeBalloonBalloon*, TimeBalloonCircle*, TimeBalloonTimer*, TimeBalloonHintArrow*, al::SimpleLayoutTextHolder*, al::SimpleLayoutAppearWaitEnd*, al::LayoutActor*, al::SimpleLayoutAppearWaitEnd*, al::ActorInitInfo const&, al::SimpleLayoutAppearWaitEnd*, TimeBalloonDistanceLayout*);
    init();
    control();
    exeExplainStart();
    exeStandby();
    exePlay();
    exeFindSuccess();
    exeFindFailed();
    setNerveExplainStartEventGetBalloon();
    setNerveExplainStartEventGetBalloonTutorial();
    setNerveExplainStartEventRetry();
    setNerveExplainStartEventFailedMiss();
    setNerveStandby();
    setFindBalloonName(char const*);
    isPlay() const;
    isFindSuccess() const;
    isFindFailed() const;
    ~TimeBalloonStateFindBalloon();
};
