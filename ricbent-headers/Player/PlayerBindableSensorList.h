#pragma once

class PlayerBindableSensorList
{
public:
    PlayerBindableSensorList();
    clear();
    append(al::HitSensor*, unsigned int, float, int);
    remove(al::HitSensor*);
    sort();
    getNum() const;
    get(unsigned int) const;
    getType(unsigned int) const;
};
