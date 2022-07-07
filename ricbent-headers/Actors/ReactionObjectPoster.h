#pragma once

class ReactionObjectPoster
{
public:
    ReactionObjectPoster(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
};
