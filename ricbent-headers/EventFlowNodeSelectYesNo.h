#pragma once

class EventFlowNodeSelectYesNo
{
public:
    EventFlowNodeSelectYesNo(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
    getNextId() const;
};
