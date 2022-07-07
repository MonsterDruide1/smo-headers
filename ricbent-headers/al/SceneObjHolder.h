#pragma once

namespace al { 

class SceneObjHolder
{
public:
    SceneObjHolder(al::ISceneObj* (*)(int), int);
    create(int);
    tryGetObj(int) const;
    getObj(int) const;
    isExist(int) const;
    setSceneObj(al::ISceneObj*, int);
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
};

} 
