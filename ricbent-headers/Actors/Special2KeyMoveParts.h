#pragma once

class Special2KeyMoveParts
{
public:
    Special2KeyMoveParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    reset();
    exeStandBy();
    exeDelay();
    exeMoveSign();
    exeMove();
    exeStop();
    exeReset();
};
