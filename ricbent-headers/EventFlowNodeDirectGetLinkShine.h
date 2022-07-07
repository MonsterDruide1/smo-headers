#pragma once

class EventFlowNodeDirectGetLinkShine
{
public:
    EventFlowNodeDirectGetLinkShine(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    exeWaitCameraInterpole();
    exeWaitGetDemo();
};
