#pragma once

class StageSceneStateTimeBalloonShowAchievement
{
public:
    StageSceneStateTimeBalloonShowAchievement(char const*, al::Scene*, al::LayoutInitInfo const&, IBalloonFindMyAchievementHolder*);
    init();
    appear();
    exeShow();
    exeEnd();
    ~StageSceneStateTimeBalloonShowAchievement();
    getMessageSystem() const;
    getSceneObjHolder() const;
};
