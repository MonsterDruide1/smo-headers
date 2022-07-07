#pragma once

class TimeBalloonSequenceInfo
{
public:
    TimeBalloonSequenceInfo(GameDataHolderAccessor, al::SequenceInitInfo const&);
    ~TimeBalloonSequenceInfo();
    init();
    copy(TimeBalloonSequenceInfo const*);
    setAccessor(al::LiveActor*);
    addHioNode();
    updateBalloonFind();
    resetSequenceId();
    isUseCoinSequence() const;
    getFindBalloon();
    getFindBalloonOwnerAchievementDataId();
    setFindBalloonDataId(unsigned long);
    isEnableKidsMode() const;
    isSetSequenceInfo() const;
    isGetSequenceInfo() const;
    createProfileDataSetter(FriendsProfileDataSetter**, al::IUseSceneObjHolder const*);
    isSayBreakAlerady(al::LiveActor*) const;
    onSayBreak(al::LiveActor*);
    offSayBreak(al::LiveActor*);
    getMyBalloonHolder() const;
    getMyBalloon() const;
    getSearchBalloonHolder() const;
    getSearchBalloon() const;
    getMyAchievementHolder() const;
    onTutorial();
    offTutorial();
    isTutorial() const;
    onKidsModeReturnNormalPlay();
    getFindBalloonCoinNum() const;
    getFindBalloonRetryCoinNum() const;
    getSuccessNum() const;
    getEventEntryId() const;
    setEventEntryId(unsigned int);
};
