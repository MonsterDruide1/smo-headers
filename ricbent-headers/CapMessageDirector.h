#pragma once

class CapMessageDirector
{
public:
    CapMessageDirector();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    exeWait();
    tryStartShowPlacement();
    exeDelayPlacement();
    findPlacement() const;
    exeShowPlacement();
    forceEndInner();
    exeShowSystemLow();
    exeShowSystem();
    exeShowSystemContinue();
    exeEnd();
    isShow(char const*) const;
    isDelay(char const*) const;
    isActive(char const*) const;
    registerCapMessagePlacement(CapMessagePlacement*);
    tryShowMessageSystem(CapMessageShowInfo const*, CapMessageGameDataChecker const*);
    tryCheck(CapMessageGameDataChecker const*) const;
    tryShowMessageSystemLow(CapMessageShowInfo const*, CapMessageGameDataChecker const*);
    tryShowMessageSystemContinue(CapMessageShowInfo const*, CapMessageGameDataChecker const*);
    endCapMessageSystemContinue();
    invalidateAppearCapMessage();
    validateAppearCapMessage();
    forceEnd();
    getSceneObjName() const;
    ~CapMessageDirector();
};
