#pragma once

class TimeBalloonStateShowResult
{
public:
    TimeBalloonStateShowResult(StageSceneStateTimeBalloon*, al::SimpleLayoutAppearWaitEnd*, IBalloonFindMyAchievementHolder const*, al::LayoutInitInfo const&);
    init();
    appear();
    exeAppear();
    exeWait();
    exeEnd();
    setNerveWait();
    ~TimeBalloonStateShowResult();
};
