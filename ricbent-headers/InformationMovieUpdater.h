#pragma once

class InformationMovieUpdater
{
public:
    tryCreate(al::AreaObjDirector*, al::SceneObjHolder*, al::PlayerHolder const*);
    InformationMovieUpdater(al::AreaObjDirector*, al::SceneObjHolder*, al::PlayerHolder const*);
    init(al::LayoutInitInfo const&);
    execute();
    exeStop();
    exePrepare();
    exeAppear();
    exeWait();
    exeEnd();
    getAreaObjDirector() const;
    getSceneObjHolder() const;
    getNerveKeeper() const;
};
