#pragma once

class StageSceneStateWorldMap
{
public:
    tryCreate(al::Scene*, al::SceneInitInfo const&, al::ActorInitInfo const&, al::LayoutInitInfo const&, StageSceneStateCollectionList*);
    StageSceneStateWorldMap(char const*, al::Scene*, ShineTowerRocket*, al::SceneInitInfo const&, al::ActorInitInfo const&, al::LayoutInitInfo const&, StageSceneStateCollectionList*);
    ~StageSceneStateWorldMap();
    control();
    appear();
    kill();
    exeInit();
    exeDemoPrep();
    exeDemoStart();
    appearWorldSelectLayout();
    exeDemoWorldOpen();
    exeDemoWorldUnlock();
    exeDemoWorldSelect();
    exeDemoWorldComment();
    exeWait();
    exeIgnoreMessage();
    exeCollectionListMain();
    exeCollectionListExit();
    exeExit();
    exeEnd();
    tryOpenWorldMap();
    isCloseEndWipe() const;
    isOpenEndWipe() const;
    isOpenCollectionList() const;
};
