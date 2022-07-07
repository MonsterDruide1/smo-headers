#pragma once

class MockBalloonFindMyBalloonHolder
{
public:
    MockBalloonFindMyBalloonHolder();
    getBalloon() const;
    prepare();
    isReady() const;
    isError() const;
    update();
    isUpdateEnd() const;
    isUpdateError() const;
    syncPlayCount();
    isSyncPlayCountEnd() const;
    isSyncPlayCountError() const;
    getPlayCountAllWorld() const;
    getPlayBonusAllWorld() const;
    isExistInCurrentWorld() const;
    isBalloonLostInCurrentWorld() const;
    isExistPlayedBonus() const;
    isBalloonLostAnywhere() const;
};
