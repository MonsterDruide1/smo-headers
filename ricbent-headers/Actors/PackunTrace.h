#pragma once

class PackunTrace
{
public:
    PackunTrace(al::LiveActor*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    appear();
};
