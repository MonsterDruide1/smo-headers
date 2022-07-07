#pragma once

class TiaraEyes
{
public:
    TiaraEyes(char const*);
    init(al::ActorInitInfo const&);
    appear();
    startWaitPanicL(float);
    startWaitPanicR(float);
    startMovePanicL(float);
    startMovePanicR(float);
    startReaction();
    startReactionCap();
    exeAppear();
    exeWait();
    exeDisappear();
    exeHide();
    endHide();
    exeControlled();
};
