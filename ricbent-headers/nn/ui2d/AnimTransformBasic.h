#pragma once

namespace nn { namespace ui2d { 

class AnimTransformBasic
{
public:
    AnimTransformBasic();
    ~AnimTransformBasic();
    SetResource(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ResourceAccessor*, nn::ui2d::ResAnimationBlock const*);
    SetResource(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ResourceAccessor*, nn::ui2d::ResAnimationBlock const*, unsigned short);
    BindPane(nn::ui2d::Pane*, bool);
    CheckBindAnimationDoubly(void const*, nn::ui2d::ResAnimationContent const*) const;
    BindPaneImpl(nn::ui2d::Pane*, nn::ui2d::ResAnimationContent const*);
    BindMaterialImpl(nn::ui2d::Material*, nn::ui2d::ResAnimationContent const*);
    BindExtUserDataToPane(nn::ui2d::Pane*, nn::ui2d::ResAnimationContent const&);
    BindGroup(nn::ui2d::Group*);
    BindMaterial(nn::ui2d::Material*);
    ForceBindPane(nn::ui2d::Pane*, nn::ui2d::Pane const*);
    BindExtUserDataImpl(nn::ui2d::ResExtUserData*, nn::ui2d::ResAnimationContent const*);
    UnbindPane(nn::ui2d::Pane const*);
    EraseBindPair(int);
    UnbindGroup(nn::ui2d::Group const*);
    UnbindMaterial(nn::ui2d::Material const*);
    UnbindAll();
    Animate();
    AnimatePane(nn::ui2d::Pane*);
    AnimateMaterial(nn::ui2d::Material*);
    AnimatePaneImpl(nn::ui2d::Pane*, nn::ui2d::ResAnimationContent const*);
    AnimateMaterialImpl(nn::ui2d::Material*, nn::ui2d::ResAnimationContent const*);
    AnimateExtUserDataImpl(nn::ui2d::ResExtUserData*, nn::ui2d::ResAnimationContent const*);
    GetRuntimeTypeInfo() const;
};

} } 
