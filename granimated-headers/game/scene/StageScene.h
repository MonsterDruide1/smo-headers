#pragma once

#include "al/scene/Scene.h"

class StageScene : public al::Scene
{
public:
    StageScene();

    virtual ~StageScene();
    virtual void init(const al::SceneInitInfo &);
    virtual void appear();
    virtual void kill();
    
    virtual void control();
    virtual void drawMain();

	// 0x10 - al::AudioKeeper* mAudioKeeper;
	// 0x18 - al::IUseCamera
	// 0x20 - al::IUseSceneObjHolder
	// 0x60 al::PlacementInfo *
	// 0x180 - StageSceneStagePauseMenu
	// 0x200 - StageSceneStateWarp
	// 0x2F8 - StageSceneLayout
	
};