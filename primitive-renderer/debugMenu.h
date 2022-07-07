#pragma once

#include "sead/container/seadPtrArray.h"
#include "sead/basis/seadNew.h"
#include "sead/devenv/seadDebugFontMgrNvn.h"
#include "sead/gfx/seadCamera.h"
#include "sead/gfx/seadTextWriter.h"

//#include "sead/gfx/seadViewport.h"
#include "sead/gfx/seadPrimitiveRenderer.h"

#include "agl/DrawContext.h"
#include "agl/RenderBuffer.h"
#include "agl/utl.h"
#include "game/HakoniwaSequence/HakoniwaSequence.h"

#include "game/System/GameSystem.h"

#include "al/util.hpp"

#include "helpers.h"
#include "main.h"

#include "al/LiveActor/LiveActor.h"
#include "math/seadMatrix.h"

#include "game/StageScene/StageScene.h"
#include "gfx/seadColor.h"

#include <typeinfo>

namespace sead {
class Viewport;
}

extern sead::TextWriter *gTextWriter;

// extern bool showMenu;
// extern bool show2DMoveAreas;
// extern bool showWaterAreas;
// extern bool showDeathAreas;
// extern bool showWarpAreas;
// extern bool showMissRestartAreas;
// extern bool showRaceCourseOutAreas;
// extern bool showChangeStageAreas;
// extern bool showCameraAreas;
// extern bool isInGame;

bool setupDebugMenu(agl::DrawContext *context, sead::Viewport *viewport);
void drawBackground(agl::DrawContext *context);
void drawMainHook(HakoniwaSequence *curSequence, sead::Viewport *viewport, sead::DrawContext *drawContext);
