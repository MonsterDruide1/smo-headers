#pragma once

#include "al/hio/HioNode.h"
#include "al/message/IUseMessageSystem.h"
#include "al/scene/ISceneObj.h"

class GameDataHolderBase : public al::ISceneObj, public al::IUseMessageSystem, public al::HioNode {
public:
};
