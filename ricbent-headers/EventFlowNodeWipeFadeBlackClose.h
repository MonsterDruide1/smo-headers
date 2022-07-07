#pragma once

class EventFlowNodeWipeFadeBlackClose
{
public:
    EventFlowNodeWipeFadeBlackClose(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};
