#pragma once

namespace nn { namespace vfx { namespace Primitive {

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
CalculateBufferSize(nn::vfx::detail::BinaryData*);
Initialize(nn::vfx::detail::ConstantBuffer*, nn::vfx::detail::BinaryData*);
Initialize(nn::vfx::detail::ConstantBuffer*, unsigned long, int, int, void*, void*, void*, void*, void*, void*);

} } } 
