#pragma once

namespace eui { 

class LayoutEx
{
public:
    LayoutEx(eui::Screen*);
    LayoutEx(eui::LayoutEx const&, char const*, eui::LayoutEx*);
    createAnimatorAuto(char const*, bool);
    tryCreateAnimatorAuto(char const*, bool);
    createAnimatorSet(char const* const*, unsigned int, bool);
    createAnimatorWithPane(char const*, nn::ui2d::Pane*, bool);
    GetAnimResourceData(char const*);
    createAnimatorWithGroup(char const*, nn::ui2d::Group*, bool);
    createAnimatorWithGroupIndex(char const*, unsigned int, bool);
    tryCreateAnimatorWithGroupIndex(char const*, unsigned int, bool);
    createUnbindedAnimator(char const*, bool);
    createUnbindedAnimatorWithAnimNumMultiple(char const*, int, bool);
    tryCreateAnimatorAutoWithWarning(char const*, bool);
    setMessageStringForEachId(char const*, eui::MessageString const&, bool, void*);
    setMessageStringForEachIdRecursive_(nn::ui2d::Pane*, char const*, eui::MessageString const&, bool*, int, void*);
    adjustPaneSizeToTextSizeRecursive_(nn::ui2d::Pane*);
    setMessageStringForEachIdWithPage(char const*, eui::MessageString const&, bool*, unsigned int, bool, void*);
    findTextBoxById(char const*);
    findTextBoxByIdRecursive_(nn::ui2d::Pane*, char const*);
    findPartsLayout(char const*);
    findAnimator(char const*);
    setRootPaneGlobalMtxDirty();
    startAnimOpenImpl_(bool, eui::LayoutEx::OpenAnim, bool);
    invokeSoundLink2Event_(eui::LayoutEx::SoundLink2Event);
    startAnimCloseImpl_(bool, bool);
    disableLoopAnimator_(bool);
    isAnimOpenEnd(bool) const;
    isAnimCloseEnd(bool) const;
    setDrawTargetAnim(eui::DrawTarget);
    animatorDisableCallback(eui::Animator*);
    CalculateImpl(nn::ui2d::DrawInfo&, bool);
    BuildImpl(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void const*, nn::ui2d::ResourceAccessor*, nn::ui2d::BuildArgSet const&, nn::ui2d::Layout::PartsBuildDataSet const*);
    BuildPaneObj(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned int, void const*, void const*, nn::ui2d::BuildArgSet const&);
    buildPaneObjImpl_(nn::ui2d::BuildResultInformation*, unsigned int, void const*, void const*, nn::ui2d::BuildArgSet const&);
    isScalableFontTextBox_(nn::ui2d::ResTextBox const*, nn::ui2d::ResTextBox const*, nn::ui2d::BuildArgSet const&);
    afterBuildPane_(nn::ui2d::Pane*, nn::ui2d::BuildArgSet const&);
    BuildPartsLayout(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*, nn::ui2d::Layout::PartsBuildDataSet const&, nn::ui2d::BuildArgSet const&);
    doCreatePartsLayout_(char const*, nn::ui2d::Layout::PartsBuildDataSet const&, nn::ui2d::BuildArgSet const&);
    attachPartsLayoutArchive_(sead::SafeStringBase<char> const&);
    doInitializeDefalutAnimator_();
    setOpenPaneTreeNodeInHostIO(bool);
    setOpenPaneTreeNodeInHostIORecursive(bool);
    isOpenPaneTreeNodeInHostIO() const;
    beginBuildWithRapidPaneTree(char const*, sead::Vector2<float> const&, nn::ui2d::ResourceAccessor*);
    setRootPaneForRapidPaneTree(nn::ui2d::Pane*);
    createPartsLayout(char const*, char const*, eui::LayoutEx*, sead::Vector2<float> const&, eui::ControlCreator*, eui::TextSearcher*);
    GetRuntimeTypeInfo() const;
    ~LayoutEx();
};

} 
