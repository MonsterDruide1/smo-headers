#pragma once

class GameDataHolderAccessor
{
public:
    GameDataHolderAccessor(al::IUseSceneObjHolder const*);
    GameDataHolderAccessor(al::SceneObjHolder const*);
};
