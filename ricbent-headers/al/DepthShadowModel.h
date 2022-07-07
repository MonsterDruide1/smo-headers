#pragma once

namespace al { 

class DepthShadowModel
{
public:
    DepthShadowModel(al::LiveActor*, al::ActorInitInfo const&, char const*, bool);
    DepthShadowModel(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, bool);
    initAfterPlacement();
};

} 
