#pragma once

class RandomActionUpdater
{
public:
    RandomActionUpdater(al::LiveActor*, TalkNpcActionAnimInfo const*);
    initBalloonAction(char const*);
    startActionOneTime(char const*);
    tryStartWaitActionIfNotPlaying();
    update();
    forceEnd();
    restart();
    isPlayingBalloonAction() const;
    exeWait();
    exeBalloonAction();
    exePlayOneTime();
    exeRandomOneTime();
    exeRandomLoop();
    ~RandomActionUpdater();
};
