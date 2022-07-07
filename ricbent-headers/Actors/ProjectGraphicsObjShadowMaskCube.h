#pragma once

class ProjectGraphicsObjShadowMaskCube
{
public:
    ProjectGraphicsObjShadowMaskCube(char const*);
    ~ProjectGraphicsObjShadowMaskCube();
    init(al::ActorInitInfo const&);
    tryInitTexture(char const*);
    listenStartSnapShotMode();
    listenEndSnapShotMode();
    initAfterPlacement();
    calcProjTexMatrix(sead::Matrix34<float>*, sead::Matrix34<float>*);
    declare(al::ShadowMaskDrawCategory);
    update();
    calcShadowMatrix(sead::Matrix34<float>*);
    updateMulti();
    addMulti();
    getShadowMaskType() const;
    control();
};
