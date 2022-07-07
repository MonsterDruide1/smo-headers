#pragma once

class ForestManSeed
{
public:
    ForestManSeed(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableSeedReset() const;
    isSetSeed() const;
    isEnableReaction() const;
    control();
    exeWait();
    tryUpdateSeedPosAndPose();
    tryEndGiveSeed();
    exeSwitchOn();
    exeOnWait();
    exeSwitchOff();
    updateSeedPosAndPose();
    exeScare();
    exeReaction();
    isPlantPlaceEmptyAny() const;
};
