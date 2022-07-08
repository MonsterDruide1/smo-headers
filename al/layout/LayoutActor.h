#pragma once

#include "al/hio/HioNode.h"
#include "al/iuse/IUseAudioKeeper.h"
#include "al/iuse/IUseCamera.h"
#include "al/iuse/IUseEffectKeeper.h"
#include "al/layout/IUseLayout.h"
#include "al/message/IUseMessageSystem.h"
#include "al/nerve/Nerve.h"
#include "al/scene/SceneObjHolder.h"

namespace al {

class IUseLayoutAction {};

class LayoutActor : public al::IUseHioNode,
                    public al::IUseNerve,
                    public al::IUseLayout,
                    public al::IUseLayoutAction,
                    public al::IUseMessageSystem,
                    public al::IUseCamera,
                    public al::IUseAudioKeeper,
                    public al::IUseEffectKeeper,
                    public al::IUseSceneObjHolder {};
}  // namespace al
