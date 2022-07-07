#pragma once

class TimeBalloonStateFindBalloonSuccess
{
public:
    TimeBalloonStateFindBalloonSuccess(StageSceneStateTimeBalloon*, TimeBalloonNpc*, TimeBalloonTimer*, al::SimpleLayoutTextHolder*, al::SimpleLayoutAppearWaitEnd*, al::LayoutActor*, al::ActorInitInfo const&, TimeBalloonBalloon*, TimeBalloonDistanceLayout*);
    init();
    exeFindSuccessStart();
    exeFindSuccess();
    exeEnd();
    isEnd() const;
    ~TimeBalloonStateFindBalloonSuccess();
};
