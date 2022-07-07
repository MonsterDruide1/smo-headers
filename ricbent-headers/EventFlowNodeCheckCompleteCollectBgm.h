#pragma once

class EventFlowNodeCheckCompleteCollectBgm
{
public:
    EventFlowNodeCheckCompleteCollectBgm(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
