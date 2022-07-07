#pragma once

class SwitchKeepOn2DExceptDokanInAreaGroup
{
public:
    tryCreate(char const*, al::AreaObjDirector*, al::PlayerHolder const*);
    selectTargetPosArray(bool*, sead::Vector3<float>**, int*, al::AreaObj const*, al::SwitchAreaTargetInfo const*);
    isExternalCondition() const;
    SwitchKeepOn2DExceptDokanInAreaGroup(al::AreaObjGroup*, al::PlayerHolder const*);
};
