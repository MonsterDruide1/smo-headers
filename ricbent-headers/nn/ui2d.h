#pragma once

namespace nn { namespace ui2d {

Initialize(void* (*)(unsigned long, unsigned long, void*), void (*)(void*, void*), void*);
IsResShaderContainerInitialized_(nn::gfx::ResShaderContainer*);
LoadTexture(nn::ui2d::ResourceTextureInfo*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void const*);
LoadArchiveShader(nn::ui2d::ShaderInfo*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void*, void const*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
FreeArchiveShader(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ShaderInfo*);
ConvertBlendsToArchiveShaderName(char*, int, int);
ConvertArchiveShaderNameToBlends(int*, int*, char const*);
SearchShaderVariationIndexFromTable(void const*, int, int);
BindAnimation(nn::ui2d::AnimTransform*, nn::ui2d::Group*, bool);
UnbindAnimation(nn::ui2d::AnimTransform*, nn::ui2d::Group*);
IsContain(nn::ui2d::Pane const*, nn::util::Float2 const&);
FindHitPane(nn::ui2d::Pane*, nn::util::Float2 const&);
FindHitPane(nn::ui2d::Pane const*, nn::util::Float2 const&);
FindHitPane(nn::ui2d::Layout*, nn::util::Float2 const&);
FindHitPane(nn::ui2d::Layout const*, nn::util::Float2 const&);
GetNextPane(nn::ui2d::Pane*);
ClonePaneTree(nn::ui2d::Pane const*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
ClonePaneTreeWithPartsLayout(nn::ui2d::Pane const*, nn::ui2d::Layout*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::Layout*);
ComparePaneTreeTest(nn::ui2d::Pane const*, nn::ui2d::Pane const*);
DrawNullAndBoundingPane(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::ui2d::DrawInfo&, nn::ui2d::Material&, nn::ui2d::Pane const*, nn::util::Unorm8x4 const&, nn::util::Unorm8x4 const&);
GetHermiteCurveValue(float, nn::ui2d::ResHermiteKey const*, int);
GetExtUserData(nn::ui2d::ResExtUserDataList const*, char const*);
GetAlignedBufferSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::GpuAccess, unsigned long);
SetDefaultShaderId(nn::ui2d::Material*, int);

} } 
