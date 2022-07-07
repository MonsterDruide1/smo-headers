#pragma once

namespace nn { namespace ui2d { 

class Layout
{
public:
    SetAllocator(void* (*)(unsigned long, unsigned long, void*), void (*)(void*, void*), void*);
    AllocateMemory(unsigned long, unsigned long);
    AllocateMemory(unsigned long);
    FreeMemory(void*);
    Layout();
    ~Layout();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    Build(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ResourceAccessor*, nn::ui2d::ControlCreator*, nn::ui2d::TextSearcher*, void const*, nn::ui2d::Layout::BuildOption const&, bool);
    BuildWithName(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ResourceAccessor*, nn::ui2d::ControlCreator*, nn::ui2d::TextSearcher*, nn::ui2d::Layout::BuildOption const&, char const*, bool);
    BuildPartsImpl(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void const*, nn::ui2d::Layout::PartsBuildDataSet const*, nn::ui2d::BuildArgSet&, nn::ui2d::BuildResSet&, unsigned int);
    BuildImpl(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void const*, nn::ui2d::ResourceAccessor*, nn::ui2d::BuildArgSet const&, nn::ui2d::Layout::PartsBuildDataSet const*);
    CopyLayoutInstanceImpl(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::Layout const&, nn::ui2d::Layout*, char const*);
    CalculateGlobalMatrix(nn::ui2d::DrawInfo&, bool);
    CreateAnimTransformBasic();
    DeleteAnimTransform(nn::ui2d::AnimTransform*);
    CreateAnimTransformBasic(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void const*);
    CreateAnimTransformBasic(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::AnimResource const&);
    CreateAnimTransformBasic(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    CreatePaneAnimator(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*, nn::ui2d::Pane*, bool);
    GetAnimResourceData(char const*) const;
    CreateGroupAnimator(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*, nn::ui2d::Group*, bool);
    CreateGroupAnimatorWithIndex(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*, int, bool);
    CreateGroupArrayAnimator(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::AnimResource const&, bool);
    CreateGroupArrayAnimator(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*, bool);
    CreateGroupAnimatorAuto(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*, bool);
    BindAnimation(nn::ui2d::AnimTransform*);
    UnbindAnimation(nn::ui2d::AnimTransform*);
    UnbindAnimation(nn::ui2d::Pane*);
    UnbindAllAnimation();
    BindAnimationAuto(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::AnimResource const&);
    CalculateImpl(nn::ui2d::DrawInfo&, bool);
    Draw(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    Animate();
    UpdateAnimFrame(float);
    AnimateAndUpdateAnimFrame(float);
    GetLayoutRect() const;
    SetTagProcessor(nn::font::TagProcessorBase<unsigned short>*);
    FindPartsPaneByName(char const*);
    FindPartsPaneByName(char const*) const;
    CompareCopiedInstanceTest(nn::ui2d::Layout const&) const;
    AcquireArchiveShader(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*) const;
    BuildPaneObj(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned int, void const*, void const*, nn::ui2d::BuildArgSet const&);
    BuildPartsLayout(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*, nn::ui2d::Layout::PartsBuildDataSet const&, nn::ui2d::BuildArgSet const&);
    GetLayoutResourceData(char const*) const;
    GetRuntimeTypeInfo() const;
    g_pAllocateFunction;
    g_pFreeFunction;
    g_pUserDataForAllocator;
};

} } 
