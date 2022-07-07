#pragma once

namespace al { 

class CartoonDrawParam
{
public:
    CartoonDrawParam();
    isEnable() const;
    isEnableFishEye() const;
    getToonShadeRate() const;
    getToonStep() const;
    getToonWidth() const;
    getNoiseTextureId() const;
    getNoiseMixRate() const;
    getNoiseScale() const;
    getNoiseOffset() const;
    getCanvasTextureId() const;
    getCanvasRepeat() const;
    getCanvasMix() const;
    getIndirectTextureId() const;
    getIndirectScale() const;
    getIndirectTexScale() const;
    getIndirectTexOffset() const;
    getFishEyeParam() const;
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
