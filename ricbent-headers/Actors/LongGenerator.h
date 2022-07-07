#pragma once

class LongGenerator
{
public:
    LongGenerator(char const*);
    init(al::ActorInitInfo const&);
    listenKill();
    listenAppear();
    exeInitGenerateAll();
    exeWait();
    exeGenerate();
    tryGenerate();
    exeGenerateAll();
};
