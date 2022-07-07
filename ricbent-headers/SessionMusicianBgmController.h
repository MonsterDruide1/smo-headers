#pragma once

class SessionMusicianBgmController
{
public:
    SessionMusicianBgmController(al::LiveActor*, al::ActorInitInfo const&, bool);
    exeWait();
    tryStartBgmSituation();
    exeInArea();
    exeOutArea();
    ~SessionMusicianBgmController();
};
