#pragma once

namespace agl { namespace pfx { 

class ColorCorrection
{
public:
    ColorCorrection();
    resetAll();
    ~ColorCorrection();
    destroy_();
    initialize(int, sead::Heap*, bool);
    drawMap(agl::DrawContext*) const;
    updateProgram_() const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const&) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureSampler const&) const;
    genMessage(sead::hostio::Context*);
    genMessageParameters(sead::hostio::Context*);
    genMessageToyCameraParameters(sead::hostio::Context*);
    genMessageHsbParameters(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    updateCurves_();
    updateFlags_();
    listenNodeEvent(sead::hostio::NodeEvent const*);
    postRead_();
    enablePassHue_() const;
    enablePassSaturation_() const;
    enablePassGamma_() const;
    enablePassBrightness_() const;
    setHue(float);
    setSaturation(float);
    setBrightness(float);
    setGamma(float);
    setLevelCurve_(unsigned int, sead::hostio::CurveType, float const*, unsigned int);
    updateMapCPU_();
    convRGB_(unsigned int*, float, float, float) const;
    calcToyCamera_(float*, float*, float*) const;
    calcHue_(float, float, float) const;
    calcRGB_(unsigned int*, float, float, float) const;
    calcSaturation_(float*, float*, float*, float) const;
    calcContrast_(float*, float, float) const;
};

} } 
