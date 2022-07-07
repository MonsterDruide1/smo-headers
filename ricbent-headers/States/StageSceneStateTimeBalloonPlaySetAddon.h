#pragma once

class StageSceneStateTimeBalloonPlaySetAddon
{
public:
    StageSceneStateTimeBalloonPlaySetAddon(StageSceneStateTimeBalloonPlaySet*, IUseTimeBalloonPlayLayout*, IUseTimeBalloonPlayTimer*, IUseTimeBalloonPlayObjects*, IUseTimeBalloonPlayAudio*, IUseTimeBalloonPlayInput*, IUseTimeBalloonPlayStartJudge*);
    appear();
    kill();
    exeStart();
    exePlay();
};
