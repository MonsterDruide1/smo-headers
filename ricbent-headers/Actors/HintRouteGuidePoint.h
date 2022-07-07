#pragma once

class HintRouteGuidePoint
{
public:
    HintRouteGuidePoint(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    getGuideTrans() const;
    isValidateGuide() const;
    isHorizontalGuide() const;
    exeStart();
    tryGuideEnd();
    tryGuideHome();
    tryGuideNearHint();
    tryGuideDedication();
    exeEnd();
    exeHome();
    exeNearHint();
    updateNearHint();
    exeDedication();
    isEndDedication() const;
    exeHintNpc();
};
