#pragma once

class TimeBalloonTalkMessageChoice
{
public:
    TimeBalloonTalkMessageChoice(al::LayoutInitInfo const&);
    start(TimeBalloonTalkMessageChoice::Param*);
    exeAppearMessage();
    exeSelect();
    ~TimeBalloonTalkMessageChoice();
};
