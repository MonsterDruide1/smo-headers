#pragma once

class EventFlowNodeAppearMapAmiiboHint
{
public:
    EventFlowNodeAppearMapAmiiboHint(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    exeWaitCloseTalkMessage();
    exeWaitAppear();
    exeAppearMap();
};
