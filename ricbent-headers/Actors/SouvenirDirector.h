#pragma once

class SouvenirDirector
{
public:
    SouvenirDirector(char const*);
    init(al::ActorInitInfo const&);
    createLinks(al::LiveActor**, al::LiveActor*, al::ActorInitInfo const&, int, char const*);
    exeWait();
};
