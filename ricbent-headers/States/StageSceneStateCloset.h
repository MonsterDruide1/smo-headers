#pragma once

class StageSceneStateCloset
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&);
    StageSceneStateCloset(char const*, al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&, Closet*);
    initLayout(al::LayoutInitInfo const&);
    initModel(al::ActorInitInfo const&);
    appear();
    kill();
    control();
    updateAfterMovement();
    isDrawViewRenderer();
    isOpenEnd();
    tryCloseDoor();
    exeAppear();
    updateExistItem();
    getClothesListIdx(char const*);
    appearMarioModel();
    exeSelect();
    hideMarioModel();
    exeWear();
    exeEnd();
    killAllMarioModel();
    startActionMario(al::LiveActor*, char const*);
    ~StageSceneStateCloset();
};
