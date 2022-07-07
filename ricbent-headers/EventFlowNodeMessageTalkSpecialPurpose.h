#pragma once

class EventFlowNodeMessageTalkSpecialPurpose
{
public:
    EventFlowNodeMessageTalkSpecialPurpose(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
