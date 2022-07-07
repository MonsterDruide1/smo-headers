#pragma once

class PlayerSubjectiveWatchCheckObj
{
public:
    PlayerSubjectiveWatchCheckObj(char const*);
    init(al::ActorInitInfo const&);
    control();
    appear();
    kill();
    endClipped();
    exeNotSubjective();
    exeIn();
    exeOut();
};
