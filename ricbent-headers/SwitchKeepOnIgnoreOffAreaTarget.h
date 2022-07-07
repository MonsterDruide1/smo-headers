#pragma once

class SwitchKeepOnIgnoreOffAreaTarget
{
public:
    tryCreate(char const*, al::AreaObjDirector*);
    selectTargetPosArray(bool*, sead::Vector3<float>**, int*, al::AreaObj const*, al::SwitchAreaTargetInfo const*);
    SwitchKeepOnIgnoreOffAreaTarget(al::AreaObjGroup*);
};
