#pragma once

namespace nn { namespace gfx { namespace detail {

GetImageFormatProperty<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >(nn::gfx::ImageFormatProperty*, nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::ImageFormat);
UseMiddleWare();
GetBlockWidth(nn::gfx::ChannelFormat);
GetBlockHeight(nn::gfx::ChannelFormat);
IsCompressedFormat(nn::gfx::ChannelFormat);
IsSrgbFormat(nn::gfx::TypeFormat);
GetBytePerPixel(nn::gfx::ChannelFormat);
CalculateImageSize(nn::gfx::ChannelFormat, unsigned int, unsigned int, unsigned int);
GetChannelCount(nn::gfx::ChannelFormat);
CalculateRowSize(unsigned int, nn::gfx::ChannelFormat);
IsValidMemoryPoolProperty(int);
GetImageDimension(nn::gfx::ImageStorageDimension, bool, bool);
CheckBinaryTarget(nn::gfx::ResShaderContainerData const&, int, int);
IsThinBinaryAvailable();
GetGlslcCompilePreSpecializedFunction();
GetGlslcCompileSpecializedFunction();
GetGlslcInitializeFunction();
GetGlslcFinalizeFunction();
GetGlslcCompileFunction();
GetGlslcGetVersionFunction();
GetGlslcSetAllocatorFunction();
GetGlslcGetDefaultOptionsFunction();
SetRootBufferDescriptorTable<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >(nn::gfx::detail::CommandBufferImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::PipelineType, int, nn::gfx::DescriptorSlot const&, long);
SetRootTextureAndSamplerDescriptorTable<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >(nn::gfx::detail::CommandBufferImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::PipelineType, int, nn::gfx::DescriptorSlot const&, nn::gfx::DescriptorSlot const&, long, long);

} } } 
