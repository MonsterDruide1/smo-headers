#pragma once

class EventFlowNodePlayerTurn
{
public:
    EventFlowNodePlayerTurn(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
    end();
};
