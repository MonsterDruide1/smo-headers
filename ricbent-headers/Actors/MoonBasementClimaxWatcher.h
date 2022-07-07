#pragma once

class MoonBasementClimaxWatcher
{
public:
    MoonBasementClimaxWatcher(char const*);
    init(al::ActorInitInfo const&);
    control();
    requestStartPillarBreakCamera(al::IUseCamera*, al::CameraTicket*);
    requestEndPillarBreakCamera(al::IUseCamera*, al::CameraTicket*);
};
