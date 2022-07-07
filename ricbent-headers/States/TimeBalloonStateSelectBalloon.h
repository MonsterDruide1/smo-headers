#pragma once

class TimeBalloonStateSelectBalloon
{
public:
    TimeBalloonStateSelectBalloon(TimeBalloonDirector*, TimeBalloonBalloon*, TimeBalloonHintArrow*, al::SimpleLayoutTextHolder*, TimeBalloonNpc*, al::ActorInitInfo const&, IBalloonDataResultSet const*, TimeBalloonDistanceLayout*, sead::PtrArray<TimeBalloon::AchievementData>*);
    init();
    kill();
    exeExplain();
    exeSelectStart();
    changePage(int);
    exeSelect();
    decideBalloon(int);
    exeWaitPageSetup();
    refleshSelectParts();
    exeDecideStart();
    exeDecideBalloon();
    exeDecideLackCoin();
    exeDecideLackCoinWait();
    exeCancelStart();
    exeCancel();
    exeCancelWait();
    exeWait();
    exeChangePage();
    setNerveExplain();
    setNerveSelectBalloonStart();
    setNerveDecideLackCoinWait();
    setNerveCancelWait();
    isNerveDecideBalloon() const;
    isNerveDecideLackCoin() const;
    isNerveCancel() const;
    endLayoutForce();
    getSelectBalloonCoin(int*, int*) const;
    getMessageSystem() const;
    ~TimeBalloonStateSelectBalloon();
};
