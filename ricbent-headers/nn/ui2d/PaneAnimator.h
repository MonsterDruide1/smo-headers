#pragma once

namespace nn { namespace ui2d { 

class PaneAnimator
{
public:
    Setup(nn::ui2d::Pane*, bool);
    Unbind();
    GetRuntimeTypeInfo() const;
    ~PaneAnimator();
};

} } 
