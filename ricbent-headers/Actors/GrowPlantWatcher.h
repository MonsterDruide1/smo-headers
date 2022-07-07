#pragma once

class GrowPlantWatcher
{
public:
    GrowPlantWatcher(char const*);
    init(al::ActorInitInfo const&);
    isPlantEndAll() const;
    kill();
    exeWatch();
};
