#pragma once

class FukankunZoomCapMessage
{
public:
    FukankunZoomCapMessage(al::LiveActor const*);
    init(al::ActorInitInfo const&, char const*, char const*);
    initAfterPlacement();
    update();
};
