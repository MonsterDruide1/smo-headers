#pragma once

class PopnGenerator
{
public:
    PopnGenerator(char const*);
    init(al::ActorInitInfo const&);
    startGenerate();
    endGenerate();
    reset();
    tryGenerate(bool);
    exeStop();
    exeWait();
    exeGenerate();
    exeSwitchDelay();
};
