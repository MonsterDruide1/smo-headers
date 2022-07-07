#pragma once

class AllDeadWatcherWithShine
{
public:
    AllDeadWatcherWithShine(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    exeWatch();
    exeWait();
};
