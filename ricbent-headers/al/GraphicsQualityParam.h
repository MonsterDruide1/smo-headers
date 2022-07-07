#pragma once

namespace al { 

class GraphicsQualityParam
{
public:
    GraphicsQualityParam();
    getName() const;
    getSuffixName() const;
    getParamType() const;
    getRank() const;
    copyStageParam(al::GraphicsQualityParam*);
};

} 
