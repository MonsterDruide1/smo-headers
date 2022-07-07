#pragma once

class CageShine
{
public:
    CageShine(char const*);
    init(al::ActorInitInfo const&);
    addDemoActor();
    startBreak();
    exeWait();
    exeBreak();
};
