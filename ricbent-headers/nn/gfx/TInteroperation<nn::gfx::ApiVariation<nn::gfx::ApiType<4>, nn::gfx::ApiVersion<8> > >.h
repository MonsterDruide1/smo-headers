#pragma once

namespace nn { namespace gfx { namespace TInteroperation<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

ConvertToGfxDevice(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNdevice*);
ConvertToGfxQueue(nn::gfx::TQueue<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNqueue*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
ConvertToGfxMemoryPool(nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNmemoryPool*, void*);
ConvertToGfxDescriptorPool(nn::gfx::TDescriptorPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNtexturePool*);
ConvertToGfxDescriptorPool(nn::gfx::TDescriptorPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNsamplerPool*);
ConvertToGfxBuffer(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNbuffer*);
ConvertToGfxCommandBuffer(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNcommandBuffer*);
ConvertToGfxSampler(nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNsampler*);
ConvertToGfxShader(nn::gfx::TShader<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNprogram*, bool, int);
ConvertToGfxTexture(nn::gfx::TTexture<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNtexture*);
ConvertToGfxTextureView(nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNtexture*, NVNtextureView*);
ConvertToGfxColorTargetView(nn::gfx::TColorTargetView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNtexture*, NVNtextureView*);
ConvertToGfxDepthStencilView(nn::gfx::TDepthStencilView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, NVNtexture*, NVNtextureView*);
ConvertToNvnFormat(nn::gfx::ImageFormat);
ConvertToNvnFormat(nn::gfx::AttributeFormat);

} } } 
