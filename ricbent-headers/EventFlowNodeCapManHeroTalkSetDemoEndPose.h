#pragma once

class EventFlowNodeCapManHeroTalkSetDemoEndPose
{
public:
    EventFlowNodeCapManHeroTalkSetDemoEndPose(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    exeTurnToEndPose();
};
