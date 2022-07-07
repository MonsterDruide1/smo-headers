#pragma once

namespace eui {

CalcPaneBoundBox(sead::BoundBox2<float>*, nn::ui2d::Pane const&);
SetupTextureInfoByAglTextureData(nn::ui2d::TextureInfo*, agl::TextureData const&, agl::TextureCompSel const*);
AglTextureFormatToLytFormat(nn::gfx::ImageFormat*, agl::TextureFormat, bool);
SetupAglTextureDataByTextureInfo(agl::TextureData*, nn::ui2d::TextureInfo const&);
FindExtUserDataFromList(nn::ui2d::ResExtUserDataList const*, char const*);
GetOppositeDirection(eui::Direction);
GetRadAngleOfDirection(eui::Direction);
AdjustPaneSizeToTextSize(nn::ui2d::Pane*, eui::LayoutEx*);
CenteringPanePair(nn::ui2d::Pane*);
ApplyTextureInfoToMaterial(nn::ui2d::Pane*, nn::ui2d::TextureInfo const&, int);
ApplyCaptureUse(nn::ui2d::Pane*, eui::LayoutEx*);
FindPaneByPath(char const*, eui::LayoutEx*, eui::LayoutEx**);
ApplyDynamicCaptureUse(nn::ui2d::Pane*, eui::LayoutEx*);
InitializeMultiFilter(sead::Heap*, nn::ui2d::Pane const&, eui::LayoutEx*);
IteratePaneForRequestCapture(nn::ui2d::Pane*);
SetupDrawInfoOrtho(nn::ui2d::DrawInfo*, nn::ui2d::Size const&);
SetupDrawInfoPerspective(nn::ui2d::DrawInfo*, nn::ui2d::Size const&, float);
ClonePaneTree(nn::ui2d::Pane const*, eui::LayoutEx*, bool);
CloneGroup(nn::ui2d::Group const&, nn::ui2d::Pane*);
CreateLayoutItemUniqueName(sead::StringBuilderBase<char>*, char const*, eui::LayoutEx const*);
AppendLayoutItemUniqueName(sead::StringBuilderBase<char>*, char const*, eui::LayoutEx const*);
CreateLayoutItemUniqueNameByPath(sead::StringBuilderBase<char>*, char const*, eui::LayoutEx const*);
ProcessMessageAppTag(eui::MessageString const&, sead::IDelegate1<sead::MessageSet<char16_t>::TagInfo const*>*);
IteratePaneForSetupPaneAfterBuild(nn::ui2d::Pane*, eui::LayoutEx*);
SetupPaneAfterBuild(nn::ui2d::Pane*, eui::LayoutEx*);
GetNwAllocatorHeap();
SetTextureInfoFromTexMap(nn::ui2d::TextureInfo*, nn::ui2d::TexMap const&);
LocateBelongingLayout(nn::ui2d::Pane const*);
PrintRapidPaneTreeMacro(eui::LayoutEx const&, eui::FontMgr const&);
PrintRapidPaneTreeMacroRecursive_(nn::ui2d::Pane const*, int, eui::FontMgr const&);
PrintPaneTree(nn::ui2d::Pane const*, int);
RegisterSlotForTexture(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*);
RegisterSlotForSampler(nn::gfx::DescriptorSlot*, nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*);
UnregisterSlotForTexture(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*);
UnregisterSlotForSampler(nn::gfx::DescriptorSlot*, nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*);

} 
