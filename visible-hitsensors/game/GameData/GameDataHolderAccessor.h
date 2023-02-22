/**
 * @file GameDataHolderAccessor.h
 * @brief Wrapper class for GameDataHolder.
 */

#pragma once

#include "al/scene/Scene.h"
#include "types.h"
#include "GameDataHolder.h"
#include "GameDataHolderWriter.h"

class GameDataHolderAccessor : public GameDataHolderWriter
{
    public:
        GameDataHolderAccessor(al::IUseSceneObjHolder const *);
        GameDataHolderAccessor(al::SceneObjHolder const *);
        
        GameDataHolder *holder;
};
