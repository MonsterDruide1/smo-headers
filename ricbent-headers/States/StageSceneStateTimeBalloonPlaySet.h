#pragma once

class StageSceneStateTimeBalloonPlaySet
{
public:
    StageSceneStateTimeBalloonPlaySet(StageScene*, TimeBalloonUtil::ISceneControl*, StageSceneStateStageMap*, StageSceneStateMiss*, al::NerveStateBase*, al::NerveStateBase*, WarpInterface*, PauseInterface*, al::LiveActor*, IUseTimeBalloonPlayLayout*, IUseTimeBalloonPlayTimer*, IUseTimeBalloonPlayObjects*, IUseTimeBalloonPlayAudio*, IUseTimeBalloonPlayInput*, IUseTimeBalloonPlayStartJudge*);
    appear();
    kill();
    exeStart();
    isMapOpen() const;
    exePlay();
    isMiss() const;
    isWarp();
    isPause() const;
    exeOpenMap();
    exePause();
    exeWarp();
    exeMiss();
    isPlaying() const;
    isEnd() const;
    isMissNerve() const;
    ~StageSceneStateTimeBalloonPlaySet();
};
