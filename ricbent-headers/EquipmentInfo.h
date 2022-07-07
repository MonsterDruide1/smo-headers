#pragma once

class EquipmentInfo
{
public:
    EquipmentInfo(al::LiveActor const*);
    onNoCapThrow();
    onForceDash(int, float);
    isNoCapThrow() const;
    isForceDash() const;
};
