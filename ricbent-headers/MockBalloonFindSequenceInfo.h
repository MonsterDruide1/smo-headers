#pragma once

class MockBalloonFindSequenceInfo
{
public:
    MockBalloonFindSequenceInfo(al::LiveActor*);
    getMyBalloonHolder() const;
    getSearchBalloonHolder() const;
    getMyAchievementHolder() const;
    getEventEntryId() const;
    setEventEntryId(unsigned int);
    isSayBreakAlerady(al::LiveActor*) const;
    onSayBreak(al::LiveActor*);
    offSayBreak(al::LiveActor*);
    onTutorial();
    offTutorial();
    isTutorial() const;
    onKidsModeReturnNormalPlay();
    getFindBalloonCoinNum() const;
    getFindBalloonRetryCoinNum() const;
    getSuccessNum() const;
    getMyBalloon() const;
    getSearchBalloon() const;
    ~MockBalloonFindSequenceInfo();
};
