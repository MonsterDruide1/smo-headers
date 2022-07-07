#pragma once

namespace nn { namespace gfx { namespace detail { namespace Nvn {

GetImageFormat(nn::gfx::ImageFormat);
GetAttributeFormat(nn::gfx::AttributeFormat);
GetImageTarget(nn::gfx::ImageDimension);
GetDepthFunction(nn::gfx::ComparisonFunction);
GetStencilOperation(nn::gfx::StencilOperation);
GetStencilFunction(nn::gfx::ComparisonFunction);
GetBlendEquation(nn::gfx::BlendFunction);
GetBlendFunction(nn::gfx::BlendFactor);
GetLogicOperation(nn::gfx::LogicOperation);
GetFrontFace(nn::gfx::FrontFace);
GetFillMode(nn::gfx::FillMode);
GetDrawPrimitive(nn::gfx::PrimitiveTopology);
GetMinFilter(nn::gfx::FilterMode);
GetMagFilter(nn::gfx::FilterMode);
GetWrapMode(nn::gfx::TextureAddressMode);
GetShaderStage(nn::gfx::ShaderStage);
GetShaderStageBits(int);
GetRComparisonFunction(nn::gfx::ComparisonFunction);
GetIndexFormat(nn::gfx::IndexFormat);
GetCullMode(nn::gfx::CullMode);
GetMemoryPoolFlags(int);
GetBufferAddress(nn::gfx::GpuAddress);
SetupScanBufferTextureInfo(nn::gfx::TextureInfo*, nn::gfx::SwapChainInfo const&);
GetCounterType(nn::gfx::QueryTarget);
GetDeviceFeature(NVNdevice const*);
GetImageFormatProperty(nn::gfx::ImageFormatProperty*, NVNformat);
GetGfxImageFormat(NVNformat);
DebugCallback(NVNdebugCallbackSource, NVNdebugCallbackType, int, NVNdebugCallbackSeverity, char const*, void*);
GetFirstScanBufferIndex();
SetPackagedTextureDataImpl(NVNtextureBuilder*, nn::gfx::TextureInfo const&, nn::gfx::detail::MemoryPoolImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
ToTimeSpan(long);

} } } } 
