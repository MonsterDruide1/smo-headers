#pragma once

class SwitchOnPlayerOnGroundAreaGroup
{
public:
    tryCreate(char const*, al::AreaObjDirector*, al::PlayerHolder const*);
    isExternalCondition() const;
    SwitchOnPlayerOnGroundAreaGroup(al::AreaObjGroup*, al::PlayerHolder const*);
};
