#pragma once

namespace al { 

class AddDemoInfo
{
public:
    AddDemoInfo(int);
    init(al::PlacementId const&);
    addDemoActor(al::LiveActor*);
    getDemoName() const;
    reset();
    getDemoActor(int) const;
};

} 
