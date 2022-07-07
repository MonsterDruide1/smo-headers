#pragma once

class EventFlowNodeCheckFirstTalkCollectBgm
{
public:
    EventFlowNodeCheckFirstTalkCollectBgm(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
