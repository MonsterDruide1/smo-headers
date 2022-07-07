#pragma once

class MockBalloonFindSearchBalloonHolder
{
public:
    MockBalloonFindSearchBalloonHolder(al::LiveActor*);
    getBalloon() const;
    getBalloon(int, int) const;
    getBalloonSetNum() const;
    getBalloonNum(int) const;
    select(int, int);
    prepare();
    isReady() const;
    isError() const;
    isExistBalloonInCurrentWorld() const;
};
