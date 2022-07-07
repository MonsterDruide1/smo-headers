#pragma once

namespace agl { namespace utl { namespace ImageFilter2D {

drawTexture(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
draw(agl::DrawContext*, agl::ShaderProgram const&, agl::TextureSampler const&, sead::Viewport const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawTextureQuadTriangle(agl::DrawContext*, agl::TextureSampler const&);
drawQuadTriangle(agl::DrawContext*, agl::ShaderProgram const&, agl::TextureSampler const&);
drawDepthQuadTriangle(agl::DrawContext*, agl::TextureSampler const&);
drawTextureChannel(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, agl::utl::ImageFilter2D::Channel, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawTextureMipLevel(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, float, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawTexture2DArray(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, int, sead::Vector2<float> const&, sead::Vector2<float> const&, float);
drawTexture3D(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, float, sead::Vector2<float> const&, sead::Vector2<float> const&, float);
drawTextureCubeMap(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, agl::CubeMapFace, sead::Vector2<float> const&, sead::Vector2<float> const&, float);
drawTextureCubeArray(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, int, agl::CubeMapFace, sead::Vector2<float> const&, sead::Vector2<float> const&, float);
drawTextureTexCoord(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, sead::Vector2<float> const&, float, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawTextureMSAA(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawReduce(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, agl::utl::ImageFilter2D::ReduceScale, float, sead::Vector2<float> const&);
getReduceProgram_(agl::utl::ImageFilter2D::ReduceScale);
drawBlur(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, agl::utl::ImageFilter2D::BlurType, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
getBlurProgram_(agl::utl::ImageFilter2D::BlurType);
drawGaussian(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, agl::utl::ImageFilter2D::GaussianKernel, bool, bool, sead::Vector2<float> const&);
drawCubic(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, sead::Vector2<float> const&, float, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawAlphaModifiedTexture(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawColorDrift(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawNV12Decord(agl::DrawContext*, agl::TextureSampler const&, agl::TextureSampler const&, sead::Viewport const&, sead::Vector2<float> const&, sead::Vector2<float> const&, bool);
drawNV12DecordQuadTriangle(agl::DrawContext*, agl::TextureSampler const&, agl::TextureSampler const&, bool);
drawCubemapGaussian(agl::DrawContext*, agl::TextureSampler const&, unsigned int, unsigned int, agl::utl::ImageFilter2D::BlurType, float);
drawCubemapGaussian(agl::DrawContext*, agl::TextureSampler const&, unsigned int, unsigned int, unsigned int, agl::utl::ImageFilter2D::BlurType, float);
drawCubemapIrradiance(agl::DrawContext*, agl::TextureSampler const&, unsigned int, unsigned int, sead::Vector3<float> const&);
drawCubemapSH(agl::DrawContext*, agl::TextureSampler const&, float, sead::Vector2<float> const&, float, agl::TextureSampler const*, sead::Vector4<float> const&, sead::Vector4<float> const&);
drawCubemapSHPoint(agl::DrawContext*, agl::TextureSampler const&, float, sead::Vector3<float> const&, float, agl::TextureSampler const*, sead::Vector4<float> const&, sead::Vector4<float> const&);
drawCubemapSHOcclusion(agl::DrawContext*, agl::TextureSampler const&, float, sead::Vector2<float> const&, sead::Vector3<float> const&, float);
drawFXAA(agl::DrawContext*, agl::TextureSampler const&);
drawFXAA(agl::DrawContext*, agl::TextureSampler const&, agl::TextureSampler const&);
drawTextureGamma(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, float, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawTextureGammaQuadTriangle(agl::DrawContext*, agl::TextureSampler const&, float);
drawLinearDepth(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, float, float, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawLinearDepthArray(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, int, float, float, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawUint(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, sead::Vector4<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawUintArray(agl::DrawContext*, agl::TextureSampler const&, sead::Viewport const&, int, sead::Vector4<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
drawLinearDepthQuadTriangle(agl::DrawContext*, agl::TextureSampler const&, float, float);
drawColorQuadTriangle(agl::DrawContext*, sead::Color4f const&, float);
drawDepthMaskQuadTriangle(agl::DrawContext*, agl::TextureSampler const&);
drawLuminanceQuadTriangle(agl::DrawContext*, agl::TextureSampler const&, sead::Vector3<float> const&);
drawNormalMap(agl::DrawContext*, agl::TextureSampler const&, float, float);
drawBC(agl::DrawContext*, agl::TextureSampler const&, unsigned int, unsigned int, agl::utl::ImageFilter2D::TextureCompressType);
drawBCHQ(agl::DrawContext*, agl::TextureSampler const&, unsigned int, unsigned int, agl::utl::ImageFilter2D::TextureCompressType);
draw2DArrayColorQuadTriangle(agl::DrawContext*, agl::TextureSampler const&, int);
draw2DArrayDepthQuadTriangle(agl::DrawContext*, agl::TextureSampler const&, int);
draw2DMinMaxQuadTriangle(agl::DrawContext*, agl::TextureSampler const&, bool, bool);
draw2DArrayMinMaxQuadTriangle(agl::DrawContext*, agl::TextureSampler const&, bool, bool, int);

} } } 
