#pragma once

class ShineTowerNpc
{
public:
    ShineTowerNpc(char const*);
    init(al::ActorInitInfo const&);
    noBalloon();
    startBalloon();
    exeWait();
    exeGoKoopa();
    exeNoBalloon();
};
