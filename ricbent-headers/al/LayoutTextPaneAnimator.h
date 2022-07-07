#pragma once

namespace al { 

class LayoutTextPaneAnimator
{
public:
    LayoutTextPaneAnimator(nn::ui2d::TextBox*, al::LayoutActor*);
    initEuiLetterAnimCtrl(eui::LayoutEx*);
    initEuiLetterAnimCtrlWithShadow(eui::LayoutEx*, nn::ui2d::TextBox*);
    start(char16_t const*, al::MessageTagDataHolder const*, al::ReplaceTagProcessorBase const*);
    end();
    update();
    updateText();
    skip();
    flush();
    changeNextPage(al::MessageTagDataHolder const*, al::ReplaceTagProcessorBase const*);
    getCurrentMessage() const;
    tryGetNextMessage() const;
    startVoice(char const*);
};

} 
