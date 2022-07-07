#pragma once

class EventFlowNodeMessageTalk
{
public:
    EventFlowNodeMessageTalk(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
    end();
};
