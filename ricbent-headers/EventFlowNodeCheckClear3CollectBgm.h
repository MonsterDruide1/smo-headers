#pragma once

class EventFlowNodeCheckClear3CollectBgm
{
public:
    EventFlowNodeCheckClear3CollectBgm(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
