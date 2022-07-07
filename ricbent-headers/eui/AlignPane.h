#pragma once

namespace eui { 

class AlignPane
{
public:
    AlignPane(eui::AlignPane::AlignKind, bool, float);
    AlignPane(nn::ui2d::ResPane const*, nn::ui2d::BuildArgSet const&);
    AlignPane(eui::AlignPane const&, eui::LayoutEx*);
    ~AlignPane();
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    doAlign_();
    setAlignKind(eui::AlignPane::AlignKind);
    setExtendEdge(bool);
    setDefaultMargin(float);
    getAlignInfo_(nn::ui2d::Pane*, float*, float*, float*);
    extendEdge_(eui::AlignPane::AlignInfo*, float, bool);
    calcPartsBound_(nn::ui2d::Pane*, eui::AlignPane::Bound*, float);
    GetRuntimeTypeInfo() const;
};

} 
