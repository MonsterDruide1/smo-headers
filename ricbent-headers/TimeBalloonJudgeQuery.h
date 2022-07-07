#pragma once

class TimeBalloonJudgeQuery
{
public:
    TimeBalloonJudgeQuery(IUseDataStoreConnector*, IBalloonFindMyBalloonHolder*, IBalloonFindSearchBalloonHolder*, IBalloonFindMyAchievementHolder*, al::LiveActor*, IUseTimeBalloonPlayObjects*, IBalloonFindSequenceInfo*, TimeBalloonPlayTimer*, IUseTimeBalloonConst*);
    judgeQuery(char const*) const;
};
