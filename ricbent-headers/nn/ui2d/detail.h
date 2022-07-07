#pragma once

namespace nn { namespace ui2d { namespace detail {

GetResMaterial(nn::ui2d::BuildResSet const*, unsigned short);
GetResShapeInfo(nn::ui2d::BuildResSet const*, unsigned int);
CalculateQuad(nn::ui2d::DrawInfo&, nn::ui2d::Material::ConstantBufferForVertexShader*, nn::util::Float2 const&, nn::ui2d::Size const&);
CalculateQuad(nn::ui2d::DrawInfo&, nn::ui2d::Material&, nn::util::Float2 const&, nn::ui2d::Size const&);
CalculateQuadWithTexCoords(nn::ui2d::DrawInfo&, nn::ui2d::Material&, nn::util::Float2 const&, nn::ui2d::Size const&, int, nn::util::Float2 const (*) [4]);
DrawQuad(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::ui2d::DrawInfo&, nn::ui2d::Material&);
DrawBox(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::ui2d::DrawInfo&, nn::ui2d::Material&, nn::util::Float2 const&, nn::ui2d::Size const&, nn::util::Unorm8x4 const&);
SetupVertexColor<4ul>(nn::ui2d::DrawInfo const&, nn::ui2d::Material&, nn::util::Unorm8x4 const (&) [4ul]);

} } } 
