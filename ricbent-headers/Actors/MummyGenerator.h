#pragma once

class MummyGenerator
{
public:
    MummyGenerator(char const*);
    init(al::ActorInitInfo const&);
    startGenerate();
    endGenerate();
    startClipped();
    endClipped();
    exeStop();
    exeStandBy();
    exeWait();
    exeAppear();
    tryGenerateRandom();
    tryGenerateLine(int);
};
