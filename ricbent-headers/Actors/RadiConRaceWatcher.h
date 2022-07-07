#pragma once

class RadiConRaceWatcher
{
public:
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    setCheckPoint(al::RaceCheckPoint*);
    registerRadiconCar(RadiconCar*);
    registerRadiconNpc(RadiconNpc*);
    isStateCountDown() const;
    isStateResult() const;
    resetRadiConCarPosition();
    doFinish();
    tryAppearShine();
    exeWait();
    exeCountDown();
    exeRace();
    exeFinish();
    exeResult();
    exeResultEnd();
    exeAppearShine();
    getSceneObjName() const;
    ~RadiConRaceWatcher();
};
