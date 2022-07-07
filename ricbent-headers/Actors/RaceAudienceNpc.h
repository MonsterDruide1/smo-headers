#pragma once

class RaceAudienceNpc
{
public:
    RaceAudienceNpc(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeDance();
    exeDanceRandom();
    exeJump();
};
