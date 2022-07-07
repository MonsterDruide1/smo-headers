#pragma once

class MiniGameLayout
{
public:
    MiniGameLayout(char const*, al::LayoutInitInfo const&);
    appear();
    kill();
    startJumprope();
    startRace();
    startVolleyball();
    end();
    setBestCount(int);
    setTodayCount(int);
    setCount(int);
    startNewRecord();
    startNewRecordWait();
    startNewRecordToday();
    isEnd() const;
    exeAppear();
    exeWait();
    exeEnd();
};
