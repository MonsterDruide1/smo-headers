#pragma once

class StageSceneStateTimeBalloonPlayGetAddon
{
public:
    StageSceneStateTimeBalloonPlayGetAddon(StageSceneStateTimeBalloonPlayGet*, al::LiveActor*, IUseTimeBalloonPlayLayout*, IUseTimeBalloonPlayTimer*, IUseTimeBalloonPlayObjects*, IUseTimeBalloonPlayAudio*, IUseTimeBalloonPlayStartJudge*);
    appear();
    kill();
    exeStart();
    exePlay();
};
