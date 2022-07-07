#pragma once

class GrowPlantGrowPlace
{
public:
    GrowPlantGrowPlace(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isPlantEnd() const;
    isEqualPlacementId(al::PlacementId const&) const;
    isClimb() const;
};
