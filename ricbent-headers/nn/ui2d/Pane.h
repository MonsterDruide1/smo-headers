#pragma once

namespace nn { namespace ui2d { 

class Pane
{
public:
    ~Pane();
    Pane();
    Initialize();
    Pane(nn::ui2d::ResPane const*, nn::ui2d::BuildArgSet const&);
    SetName(char const*);
    SetUserData(char const*);
    AllocateAndCopyAnimatedExtUserData(nn::ui2d::ResExtUserDataList const*);
    CalculateScaleFromPartsRoot(nn::util::Float2*, nn::ui2d::Pane*) const;
    Pane(nn::ui2d::Pane const&);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    AppendChild(nn::ui2d::Pane*);
    InsertChild(nn::util::IntrusiveList<nn::ui2d::Pane, nn::util::IntrusiveListMemberNodeTraits<nn::ui2d::detail::PaneBase, &nn::ui2d::detail::PaneBase::m_Link, nn::ui2d::Pane> >::iterator, nn::ui2d::Pane*);
    PrependChild(nn::ui2d::Pane*);
    InsertChild(nn::ui2d::Pane*, nn::ui2d::Pane*);
    RemoveChild(nn::ui2d::Pane*);
    GetPaneRect() const;
    GetVertexPos() const;
    GetVertexColor(int) const;
    SetVertexColor(int, nn::util::Unorm8x4 const&);
    GetColorElement(int) const;
    SetColorElement(int, unsigned char);
    GetVertexColorElement(int) const;
    SetVertexColorElement(int, unsigned char);
    FindPaneByName(char const*, bool);
    FindPaneByName(char const*, bool) const;
    FindMaterialByName(char const*, bool);
    FindMaterialByName(char const*, bool) const;
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    CalculateGlobalMatrixSelf(nn::ui2d::Pane::CalculateContext&);
    Draw(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    BindAnimation(nn::ui2d::AnimTransform*, bool, bool);
    CompareCopiedInstanceTest(nn::ui2d::Pane const&) const;
    UnbindAnimation(nn::ui2d::AnimTransform*, bool);
    UnbindAnimationSelf(nn::ui2d::AnimTransform*);
    LoadMtx(nn::ui2d::DrawInfo&);
    CalculateGlobalMatrix(nn::ui2d::Pane::CalculateContext&, bool);
    GetMaterial() const;
    GetMaterialCount() const;
    GetMaterial(int) const;
    GetExtUserDataCount() const;
    GetExtUserDataArray() const;
    FindExtUserDataByName(char const*) const;
    GetExtUserDataArrayForAnimation() const;
    FindExtUserDataByNameForAnimation(char const*) const;
    FindPaneByNameRecursive(char const*);
    FindPaneByNameRecursive(char const*) const;
    FindMaterialByNameRecursive(char const*);
    FindMaterialByNameRecursive(char const*) const;
    GetRuntimeTypeInfo() const;
};

} } 
