#pragma once

class SwitchKeepOn2DAreaGroup
{
public:
    tryCreate(char const*, al::AreaObjDirector*, al::PlayerHolder const*);
    selectTargetPosArray(bool*, sead::Vector3<float>**, int*, al::AreaObj const*, al::SwitchAreaTargetInfo const*);
    isExternalCondition() const;
    SwitchKeepOn2DAreaGroup(al::AreaObjGroup*, al::PlayerHolder const*);
};
