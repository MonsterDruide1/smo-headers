#pragma once

class EventFlowNodeIsCostumeAmiibo
{
public:
    EventFlowNodeIsCostumeAmiibo(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};
