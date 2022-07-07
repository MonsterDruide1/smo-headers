#pragma once

#include "game/StageScene/StageScene.h"
#include "sead/gfx/seadPrimitiveRenderer.h"
#include "agl/DrawContext.h"
#include "al/util.hpp"
#include "al/PlayerHolder/PlayerHolder.h"

#include "main.h"

bool tryDrawAreaGroup(al::Scene *curScene, char const *area, bool isDrawSolid, sead::Color4f wire, sead::Color4f solid, sead::Color4f cyl);
bool tryDrawActorHitsensors(al::Scene* scene, al::LiveActor* actor, sead::Color4f body, sead::Color4f eye, sead::Color4f attack);