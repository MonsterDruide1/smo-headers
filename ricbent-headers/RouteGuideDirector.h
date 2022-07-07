#pragma once

class RouteGuideDirector
{
public:
    RouteGuideDirector();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    isValidate() const;
    offGuideSystem();
    deactivateGuide();
    onGuideSystem();
    activateGuide();
    offGuideByActor(al::LiveActor*);
    addInvidateList(al::LiveActor*);
    onGuideByActor(al::LiveActor*);
    removeInvidateList(al::LiveActor const*);
    addRouteGuidePointBufferCount(int);
    registerRouteGuidePoint(RouteGuidePoint*);
    addRouteGuideArrowBufferCount(int);
    registerRouteGuideArrow(RouteGuideArrowBase*);
    exeOff();
    exeOn();
    getSceneObjName() const;
    ~RouteGuideDirector();
};
