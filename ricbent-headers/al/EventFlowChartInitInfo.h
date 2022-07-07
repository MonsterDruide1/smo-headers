#pragma once

namespace al { 

class EventFlowChartInitInfo
{
public:
    EventFlowChartInitInfo(al::LiveActor*, al::EventFlowDataHolder*, al::ActorInitInfo const&, char const*, char const*, char const*, al::EventFlowNodeFactory const&, al::SceneEventFlowMsg*, char const*);
};

} 
