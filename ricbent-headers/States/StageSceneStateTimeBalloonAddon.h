#pragma once

class StageSceneStateTimeBalloonAddon
{
public:
    StageSceneStateTimeBalloonAddon(StageSceneStateTimeBalloonNew*, al::LiveActor*, IUseDataStoreConnector*, IBalloonFindSequenceInfo*, IBalloonFindMyBalloonHolder*, IBalloonFindSearchBalloonHolder*, IBalloonFindResult*, IUseTimeBalloonPlayLayout*, IUseTimeBalloonPlayObjects*, IUseTimeBalloonConst*, al::LiveActor*);
    appear();
    exePlayGetSelect();
    exePlayGetSuccess();
    exePlayGetFailure();
    exePlayGetFailureViewAround();
    exePlayGetEnd();
    exePlaySetConfirm();
    exePlaySetTimeUp();
    receiveEvent(char const*);
};
