#pragma once

class EventFlowNodeCheckYukimaruRaceResult
{
public:
    EventFlowNodeCheckYukimaruRaceResult(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
