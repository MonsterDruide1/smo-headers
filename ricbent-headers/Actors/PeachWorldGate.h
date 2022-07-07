#pragma once

class PeachWorldGate
{
public:
    PeachWorldGate(char const*);
    init(al::ActorInitInfo const&);
    start();
    exeCloseWait();
    exeOpen();
    exeOpenWait();
};
