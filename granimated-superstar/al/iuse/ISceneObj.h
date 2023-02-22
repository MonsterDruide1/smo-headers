/**
 * @file ISceneObj.h
 * @brief Implementation for scene objects.
 */

#pragma once

#include "al/ActorInitInfo.h"

namespace al
{
    class ISceneObj
    {
    public:
        virtual ~ISceneObj();
        virtual char* getSceneObjName() const;
        virtual void initAfterPlacementSceneObj(al::ActorInitInfo const &);
        virtual void initSceneObj();
    };
};
