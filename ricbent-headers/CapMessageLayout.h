#pragma once

class CapMessageLayout
{
public:
    CapMessageLayout(char const*, char const*, al::LayoutInitInfo const&, char const*, bool);
    appear();
    kill();
    end();
    start(CapMessageShowInfo const*);
    startCore(CapMessageShowInfo const*, bool);
    startContinue(CapMessageShowInfo const*);
    setContinueShow(bool);
    tryEnd();
    tryEndExistContinueDemo();
    exeDelay();
    exeAppear();
    exeFollowText();
    exeWait();
    exeEnd();
    isDelay(char const*) const;
    isShow(char const*) const;
};
