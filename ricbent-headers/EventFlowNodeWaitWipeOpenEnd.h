#pragma once

class EventFlowNodeWaitWipeOpenEnd
{
public:
    EventFlowNodeWaitWipeOpenEnd(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    exeWait();
};
