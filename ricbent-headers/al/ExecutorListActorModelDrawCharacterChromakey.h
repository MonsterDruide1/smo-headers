#pragma once

namespace al { 

class ExecutorListActorModelDrawCharacterChromakey
{
public:
    ExecutorListActorModelDrawCharacterChromakey(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawCharacterChromakey();
};

} 
