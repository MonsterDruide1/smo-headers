#pragma once

namespace al { 

class AtmosScatterPrecompute
{
public:
    getSaveDirectoryName() const;
    isTransmittanceNonLinear() const;
    isInscatterNonLinear() const;
    getSamplerEarth() const;
    getSamplerEarthNormal() const;
    getSamplerEarthCloud() const;
    getEarthNormalMapScale() const;
    getEarthNormalMapScaleAdd() const;
    AtmosScatterPrecompute(agl::DrawContext*, al::ShaderHolder*);
    ~AtmosScatterPrecompute();
    isPrecompute() const;
    initProjectResource();
    setEarthSamplerSetting();
    update();
    drawPrecompute(agl::DrawContext*, agl::RenderBuffer*, al::FullScreenQuadModel*) const;
};

} 
