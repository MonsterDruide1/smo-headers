#pragma once

class ProjectDemoDirector
{
public:
    ProjectDemoDirector(al::PlayerHolder const*, al::GraphicsSystemInfo*);
    endInit(al::ActorInitInfo const&);
    updateSystemOnly();
    updateDemoSyncEventKeeper();
    updateDemoActor(al::EffectSystem*);
    isActiveDemo(char const*);
    isActiveDemoWithPlayer();
    isActiveDemoWithCinemaCaption() const;
    requestStartDemo(char const*, ProjectDemoDirector::DemoType);
    requestEndDemo(char const*, ProjectDemoDirector::DemoType);
    requestStartDemoShineMainGet(Shine*, char const*);
    requestEndDemoShineMainGet(char const*);
    requestStartDemoShineGrandGet(Shine*, char const*);
    requestEndDemoShineGrandGet(char const*);
    setShine(Shine*);
    clearShine();
    requestStartDemoScenarioCamera(char const*);
    requestEndDemoScenarioCamera(char const*);
    addDemoAppearFromHomeToList(ShineTowerRocket*);
    requestStartDemoAppearFromHome(char const*);
    requestEndDemoAppearFromHome(char const*);
    addDemoReturnToHomeToList(ShineTowerRocket*);
    requestStartDemoReturnToHome(char const*);
    requestEndDemoReturnToHome(char const*);
    addDemoRiseMapPartsToList(RiseMapPartsHolder*);
    requestStartDemoRiseMapParts(char const*);
    requestEndDemoRiseMapParts(char const*);
    isExistDemoWorldLandInList() const;
    isExistDemoAppearFromHomeInList() const;
    isExistDemoReturnToHome() const;
    isExistDemoRiseMapPartsInList() const;
    startCloseDemoFade(int);
    startOpenDemoFade(int);
    isDemoFadeCloseEnd() const;
    isDemoFadeOpenEnd() const;
    isWipeStateEnableOpenMenuOrSnapShotMode() const;
    tryCreateDemoHackFirstDirector(al::LiveActor*, int, al::ActorInitInfo const&);
    noticeDemoStartToDemoHackFirstDirector();
    setDemoEnvironmentChangeFlag(bool);
    registerDemoChangeEffectObj(DemoChangeEffectObj*);
    startDemo(char const*);
    endDemo(char const*);
};
