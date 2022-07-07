#pragma once

class InformationWindowDirector
{
public:
    InformationWindowDirector(al::AreaObjDirector*, al::SceneObjHolder*, al::PlayerHolder const*);
    init(al::ActorInitInfo const&, al::LayoutInitInfo const&);
    execute();
    killAll();
    killNotRetry();
    changeSeparatePlay();
    changeSinglePlay();
    updateGyroText();
    getSceneObjName() const;
    ~InformationWindowDirector();
    getSceneObjHolder() const;
};
