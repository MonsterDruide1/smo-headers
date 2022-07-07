#pragma once

namespace eui { 

class BoxCursorControl
{
public:
    getClassName() const;
    BoxCursorControl();
    ~BoxCursorControl();
    initialize(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    Update(float);
    updateActiveNode(eui::DrawTarget);
    setActiveNode_(eui::BoxCursorNode const*);
    moveNode_(eui::Direction);
    decideNode(bool);
    clearActiveAndReservedActiveNode(eui::BoxCursorNode const*);
    selectActiveNode_();
    getActiveNodeScreen();
    isEqualActiveNodePartsLayoutName(sead::SafeStringBase<char> const&) const;
    getNodeByDirection_(eui::Direction);
    GetRuntimeTypeInfo() const;
};

} 
