#pragma once

namespace al { 

class ClippingActorInfoList
{
public:
    ClippingActorInfoList(int);
    add(al::ClippingActorInfo*);
    remove(al::LiveActor*);
    find(al::LiveActor const*, int*) const;
    tryFind(al::LiveActor const*) const;
    isInList(al::LiveActor const*) const;
};

} 
