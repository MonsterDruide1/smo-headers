#pragma once

class InformationWindowAreaRequester
{
public:
    InformationWindowAreaRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::AreaObjDirector*, al::PlayerHolder const*, al::SceneObjHolder*);
    init(al::ActorInitInfo const&, al::LayoutInitInfo const&);
    update();
    done(TutorialInfo const*);
    accept(TutorialInfo*);
    exeWaitNoEnter();
    tryFind(al::AreaObj const*);
    requestAppearArea(InformationAreaData*);
    exeCount();
    exeWaitAccept();
    exeWaitEnter();
    getNerveKeeper() const;
    getAreaObjDirector() const;
    getSceneObjHolder() const;
    getMessageSystem() const;
};
