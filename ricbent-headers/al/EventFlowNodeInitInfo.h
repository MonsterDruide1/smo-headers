#pragma once

namespace al { 

class EventFlowNodeInitInfo
{
public:
    EventFlowNodeInitInfo(al::LiveActor*, al::ActorInitInfo const&, al::PlacementId const&, al::SceneEventFlowMsg*, al::MessageSystem const*, al::EventFlowDataHolder*, char const*);
    getMessageSystem() const;
};

} 
