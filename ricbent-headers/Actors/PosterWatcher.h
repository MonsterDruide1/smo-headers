#pragma once

class PosterWatcher
{
public:
    PosterWatcher(char const*);
    init(al::ActorInitInfo const&);
    control();
};
