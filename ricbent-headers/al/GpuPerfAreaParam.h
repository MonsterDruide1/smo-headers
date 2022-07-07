#pragma once

namespace al { 

class GpuPerfAreaParam
{
public:
    GpuPerfAreaParam();
    getAreaName() const;
    isEnableLpp() const;
    isEnableOcclusionCulling() const;
    getLodDistanceScale() const;
    getPriority() const;
};

} 
