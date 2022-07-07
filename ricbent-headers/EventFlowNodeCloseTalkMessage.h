#pragma once

class EventFlowNodeCloseTalkMessage
{
public:
    EventFlowNodeCloseTalkMessage(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};
