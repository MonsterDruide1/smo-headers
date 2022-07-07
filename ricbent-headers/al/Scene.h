#pragma once

namespace al { 

class Scene
{
public:
    drawSub() const;
    getAudioKeeper() const;
    getSceneObjHolder() const;
    init(al::SceneInitInfo const&);
    control();
    drawMain() const;
    Scene(char const*);
    ~Scene();
    appear();
    kill();
    movement();
    getCameraDirector() const;
    initializeAsync(al::SceneInitInfo const&);
    initSceneObjHolder(al::SceneObjHolder*);
    initAndLoadStageResource(char const*, int);
    initLiveActorKit(al::SceneInitInfo const&, int, int, int);
    initLiveActorKitImpl(al::SceneInitInfo const&, int, int, int);
    initDrawSystemInfo(al::SceneInitInfo const&);
    initLiveActorKitWithGraphics(al::GraphicsInitArg const&, al::SceneInitInfo const&, int, int, int);
    initLayoutKit(al::SceneInitInfo const&);
    initSceneStopCtrl();
    initSceneMsgCtrl();
    initScreenCoverCtrl();
    endInit(al::ActorInitInfo const&);
};

} 
