#pragma once

class SwitchKeepOnPlayerInWaterAreaGroup
{
public:
    tryCreate(char const*, al::AreaObjDirector*, al::PlayerHolder const*);
    isExternalCondition() const;
    SwitchKeepOnPlayerInWaterAreaGroup(al::AreaObjGroup*, al::PlayerHolder const*);
};
