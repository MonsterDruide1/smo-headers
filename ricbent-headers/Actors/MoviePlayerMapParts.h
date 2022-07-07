#pragma once

class MoviePlayerMapParts
{
public:
    MoviePlayerMapParts(char const*);
    init(al::ActorInitInfo const&);
    tryPlayMovie();
    appear();
    kill();
    startClipped();
    endClipped();
    control();
};
