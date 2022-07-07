#pragma once

class YoshiFruit
{
public:
    YoshiFruit(char const*);
    init(al::ActorInitInfo const&);
    killWaterSurfaceShadow();
    initAfterPlacement();
    control();
    exeWait();
    exeReaction();
    exeReactionCap();
    exeReactionMotorcycle();
    exeBind();
    exeRestart();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    eatAndKill();
};
