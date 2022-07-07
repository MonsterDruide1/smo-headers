#pragma once

namespace nn { namespace ui2d { namespace detail { 

class AnimPaneTree
{
public:
    AnimPaneTree();
    Initialize();
    AnimPaneTree(nn::ui2d::Pane*, nn::ui2d::AnimResource const&);
    Set(nn::ui2d::Pane*, nn::ui2d::AnimResource const&);
    FindAnimContent(nn::ui2d::ResAnimationBlock const*, char const*, unsigned char);
    Bind(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::Layout*, nn::ui2d::Pane*, nn::ui2d::ResourceAccessor*) const;
};

} } } 
