#pragma once

namespace al { 

class ISceneObj
{
public:
    initSceneObj();
    ~ISceneObj();
    getSceneObjName() const;
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
};

} 
