#pragma once

class EventFlowNodeAmiiboTouchLayout
{
public:
    EventFlowNodeAmiiboTouchLayout(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    exeRequestAppearLayout();
    exeWaitTouchTrigger();
    tryCancel();
    exeCountHold();
    exeWaitTouchAmiibo();
    touch(al::NfpInfo const*);
    exeIconEnd();
    exeWaitEndLayout();
    getNextId() const;
};
