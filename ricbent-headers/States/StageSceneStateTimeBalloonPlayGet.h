#pragma once

class StageSceneStateTimeBalloonPlayGet
{
public:
    StageSceneStateTimeBalloonPlayGet(StageScene*, TimeBalloonUtil::ISceneControl*, StageSceneStateStageMap*, StageSceneStateMiss*, al::NerveStateBase*, al::NerveStateBase*, WarpInterface*, PauseInterface*, al::LiveActor*, IUseTimeBalloonPlayLayout*, IUseTimeBalloonPlayTimer*, IUseTimeBalloonPlayObjects*, IUseTimeBalloonPlayAudio*, IUseTimeBalloonPlayStartJudge*);
    appear();
    kill();
    exeStart();
    isMapOpen() const;
    exePlay();
    isDemo() const;
    isMiss() const;
    isWarp();
    isPause() const;
    exeOpenMap();
    exePause();
    exeWarp();
    exeMiss();
    exeDemo();
    isDemoEnd() const;
    isPlaying() const;
    isSuccess() const;
    isFailure() const;
    isMissNerve() const;
    ~StageSceneStateTimeBalloonPlayGet();
};
