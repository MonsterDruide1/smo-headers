#pragma once

namespace al { 

class LayoutPartsActorKeeper
{
public:
    LayoutPartsActorKeeper(int);
    resisterPartsActor(al::LayoutActor*);
    appear();
    kill();
    update();
    calcAnim(bool);
};

} 
