#pragma once

class FastenerCorner
{
public:
    FastenerCorner(char const*);
    init(al::ActorInitInfo const&);
    initWithArchive(al::ActorInitInfo const&, char const*);
};
