#pragma once

class EventFlowNodeKakkuTurn
{
public:
    EventFlowNodeKakkuTurn(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
    end();
};
