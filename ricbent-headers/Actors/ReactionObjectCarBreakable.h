#pragma once

class ReactionObjectCarBreakable
{
public:
    ReactionObjectCarBreakable(char const*);
    init(al::ActorInitInfo const&);
    kill();
};
