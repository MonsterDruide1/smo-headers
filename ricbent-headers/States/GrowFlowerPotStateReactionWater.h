#pragma once

class GrowFlowerPotStateReactionWater
{
public:
    GrowFlowerPotStateReactionWater(GrowFlowerPot*);
    appear();
    control();
    exeStart();
    exeReaction();
    exeReactionGrow();
    exeEnd();
    requestReaction();
    ~GrowFlowerPotStateReactionWater();
};
