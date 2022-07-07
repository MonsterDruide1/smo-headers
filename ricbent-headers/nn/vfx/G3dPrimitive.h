#pragma once

namespace nn { namespace vfx { namespace G3dPrimitive {

GetVertexBufferArrayCount() const;
GetIndexCount() const;
GetStrideSize(int) const;
GetVertexBufferSize(int) const;
GetVertexBufferGpuAddress(nn::gfx::GpuAddress*, int) const;
GetIndexBufferGpuAddress() const;
GetBufferCount() const;
GetBufferIndex(nn::vfx::IPrimitive::PrimitiveDataElementIndex) const;
GetFormat(nn::vfx::IPrimitive::PrimitiveDataElementIndex) const;
GetIndexFormat() const;
GetOffset(nn::vfx::IPrimitive::PrimitiveDataElementIndex) const;
Draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, int) const;
Draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, int, int) const;
Initialize(nn::g3d::ResModel*, nn::vfx::detail::ResG3dPrimitiveTableRecord*);

} } } 
