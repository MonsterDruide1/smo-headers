#pragma once

class VolleyballBase
{
public:
    VolleyballBase(char const*);
    init(al::ActorInitInfo const&);
    startReaction();
    exeWait();
    exeReaction();
};
