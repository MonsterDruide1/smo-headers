#pragma once

namespace al { 

class SeCategory
{
public:
    SeCategory(al::SeResourceCategoryInfo const*, int);
    update();
    getVolume() const;
    setVolume(float, int);
    getName() const;
    isCalcVol3D() const;
    distanceDecayVolCoef() const;
    dopplerCoef() const;
    getPriority() const;
    getId() const;
};

} 
