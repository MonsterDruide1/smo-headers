#pragma once

class TimeBalloonInsertionLayout
{
public:
    TimeBalloonInsertionLayout(al::ActorInitInfo const&, IBalloonFindMyBalloonHolder*, IBalloonFindMyAchievementHolder*);
    exeSyncPlayCount();
    exeSyncAchievement();
    exeShowPlayCount();
    exeShowBroken();
    exeShowRankUp();
    exeWait();
    kill();
    ~TimeBalloonInsertionLayout();
    execute();
};
