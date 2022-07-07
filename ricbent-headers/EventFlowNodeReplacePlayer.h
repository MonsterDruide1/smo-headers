#pragma once

class EventFlowNodeReplacePlayer
{
public:
    EventFlowNodeReplacePlayer(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
