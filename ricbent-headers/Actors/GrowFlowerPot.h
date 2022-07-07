#pragma once

class GrowFlowerPot
{
public:
    GrowFlowerPot(char const*, bool, GrowFlowerWatcher*);
    init(al::ActorInitInfo const&);
    initSetShinePtrFromSeed(Shine*);
    initAfterPlacement();
    tryMaxGrowLevel();
    setGrowFlowerTimeLocal(al::HitSensor*);
    calcGrowLevelFromImplantTime() const;
    calcGrowLevelTarget();
    isGrowAlready() const;
    control();
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setShineFromSeed(Shine*);
    growLevelFromGamaner();
    exeNoSeed();
    exeImplant();
    growSetting();
    startGrow();
    tryStartActionReactionParts();
    updateGrow();
    endGrow();
    endPartsReactionTrans();
    growLevelFromHosui();
    exeGrow();
    isEnableGrow() const;
    exeGrowWait();
    tryStartActionWaitParts();
    exeBerryWait();
    exeAppearShine();
    endAppearShine();
    exeWaitShine();
    exeResumeShine();
    exeReaction();
    exeReactionWater();
    calcGrowLevelTargetLocal(unsigned int);
    isEqualPlacementId(char const*) const;
};
