#pragma once

#include "al/scene/Scene.h"

namespace rs
{
    // ACTOR
    void faceToCamera(al::LiveActor *);

    // PLAYER
    void recoveryPlayerOxygen(al::LiveActor const *);
	al::LiveActor* getPlayerActor(const al::Scene *);
    sead::Vector3<f32>* getPlayerPos(al::LiveActor const *);
};