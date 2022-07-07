#pragma once

class TalkMessageInfoDirectorStateAppearWaitEndMessage
{
public:
    TalkMessageInfoDirectorStateAppearWaitEndMessage(TalkMessageInfoDirector*, al::SimpleLayoutAppearWaitEnd*);
    appear();
    kill();
    exeAppear();
    exeWait();
    exeEnd();
    end();
    isActiveCapMessage() const;
    ~TalkMessageInfoDirectorStateAppearWaitEndMessage();
};
