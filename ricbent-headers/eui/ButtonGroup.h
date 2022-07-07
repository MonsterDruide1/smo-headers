#pragma once

namespace eui { 

class ButtonGroup
{
public:
    ButtonGroup();
    ~ButtonGroup();
    Update(sead::Vector2<float> const*, bool, bool, bool);
    UpdateButtons_();
    SetTouchDevice(bool);
    FindDownButton();
    FindButtonByName(char const*);
    FindButtonByNameReverse(char const*);
    FindButtonByNameWithParentParts(char const*, char const*);
    FindButtonByNameWithParentPartsReverse(char const*, char const*);
    FindButtonByNameWithParentLayout(char const*, eui::LayoutEx const*);
    FindButtonByNameWithParentLayoutReverse(char const*, eui::LayoutEx const*);
    FindButtonByTag(int);
    IsExistExcludingDown() const;
    ForceOffAll();
    ForceOnAll();
    ForceDownAll();
    CancelAll();
    FreeAll();
    SetAllowNoTrigTouchAll(bool);
    SetDownWithTouchOnAll(bool);
};

} 
