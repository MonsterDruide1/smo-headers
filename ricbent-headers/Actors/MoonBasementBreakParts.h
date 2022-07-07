#pragma once

class MoonBasementBreakParts
{
public:
    MoonBasementBreakParts(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    exeWait();
    exeBreak();
};
