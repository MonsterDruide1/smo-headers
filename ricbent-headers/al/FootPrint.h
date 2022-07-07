#pragma once

namespace al { 

class FootPrint
{
public:
    FootPrint(al::ActorInitInfo const&, char const*);
    appear();
    startDisappear();
    isDisappear() const;
    exeAppear();
    exeDisappear();
    setAnimationByMaterial(char const*);
    setAnimationByCharacter(char const*);
    setAnimationByMetamorphosis(char const*);
    setFollowCollisionParts(al::CollisionParts const*);
    control();
};

} 
