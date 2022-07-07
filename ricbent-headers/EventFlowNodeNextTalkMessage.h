#pragma once

class EventFlowNodeNextTalkMessage
{
public:
    EventFlowNodeNextTalkMessage(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};
