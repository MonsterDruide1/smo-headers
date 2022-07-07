#pragma once

class EventFlowNodeSceneWipeClose
{
public:
    EventFlowNodeSceneWipeClose(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
