#pragma once

class AirBubbleGenerator
{
public:
    AirBubbleGenerator(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeCreate();
    tryCreateBubble();
    exeStop();
};
