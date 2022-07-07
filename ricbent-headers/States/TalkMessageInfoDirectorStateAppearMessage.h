#pragma once

class TalkMessageInfoDirectorStateAppearMessage
{
public:
    TalkMessageInfoDirectorStateAppearMessage(TalkMessageInfoDirector*, al::SimpleLayoutAppearWaitEnd*);
    init();
    appear();
    kill();
    exeAppearWait();
    exeAppear();
    exeFollowText();
    exeWait();
    exeEnd();
    setWaitFrame(int);
    setDelay(int);
    setLabelName(char const*);
    getLabelName() const;
    isActiveCapMessage(char const*) const;
    isDelayCapMessage(char const*) const;
    ~TalkMessageInfoDirectorStateAppearMessage();
};
