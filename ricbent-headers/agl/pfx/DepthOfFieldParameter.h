#pragma once

namespace agl { namespace pfx { 

class DepthOfFieldParameter
{
public:
    DepthOfFieldParameter();
    initialize(agl::utl::IParameterObj*, sead::Heap*);
    assignShaderProgram_();
    updateIndirectMatrix_();
    enableMipFromZeroLevel_() const;
    enableDepthBlur_() const;
    enableBlurMipMapPass_() const;
    enableSeparateVignettingPass_() const;
    enableIndirect_() const;
    enableDifferntShape_() const;
    enableDepthOfField_() const;
    setDepthParam(float, float);
    setDepthNearParam(float, float);
    setEnableDofNear(bool);
    setEnableDofFar(bool);
    setBlurParam(float);
    setDepthBlurParam(bool, float);
    setEnableVignettingBlur(bool);
    setVignettingBlur(float);
    setEnableVignettingColor(bool);
    setVignettingColor(sead::Color4f);
    setVignettingBlendType(agl::pfx::DepthOfFieldParameter::VignettingBlendType);
    setIndirectEnable(bool);
    setIndirectTextureScale(sead::Vector2<float> const&);
    setIndirectTextureRotateRad(float);
    setIndirectTextureTrans(sead::Vector2<float> const&);
    setIndirectTextureSRT(sead::Vector2<float> const&, float, sead::Vector2<float> const&);
    setEnableVignetting2Shape(bool);
    setVignettingShapeParam0(agl::pfx::DepthOfFieldParameter::VignettingShapeParam const&);
    setVignettingShapeParam1(agl::pfx::DepthOfFieldParameter::VignettingShapeParam const&);
    setEnableDofFarCancel(bool);
    setEnableIndirectDepthCancel(bool);
    setColorChangeEnable(bool);
    setColorChangeSaturateMin(float);
    setColorChangeMulColor(sead::Color4f const&);
    setEnableFinalBlur(bool);
    genMessageDepthOfFieldParameter(sead::hostio::Context*);
    listenPropertyEventDepthOfFieldParameter(sead::hostio::Node*, sead::hostio::PropertyEvent const*);
};

} } 
