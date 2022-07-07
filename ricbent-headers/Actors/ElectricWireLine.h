#pragma once

class ElectricWireLine
{
public:
    ElectricWireLine(char const*);
    init(al::ActorInitInfo const&);
    initWithArchive(al::ActorInitInfo const&, char const*);
};
