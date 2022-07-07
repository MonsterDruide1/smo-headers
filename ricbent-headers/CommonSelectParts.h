#pragma once

class CommonSelectParts
{
public:
    CommonSelectParts(char const*, al::LayoutActor*, al::LayoutInitInfo const&, int, bool);
    activateAll();
    startSelect2(char16_t const*, char16_t const*, int);
    startSelectWithChoiceTable(char16_t const**, int, int);
    startSelectWithChoiceTableWithoutPosAnim(char16_t const**, int, int);
    startSelectWithChoiceInfo(al::EventFlowChoiceInfo const*);
    isActive() const;
    isDecideEnd() const;
    setSelectPartsString(char16_t const*, int);
    deactivate(int);
    kill();
    reset();
    exeHide();
    exeAppearBefore();
    exeAppear();
    exeAppearAfter();
    exeAppearCursor();
    exeSelect();
    exeDecideParts();
    exeDecideDeactiveParts();
    exeDecide();
    exeDecideAfter();
    exeDecideEnd();
    ~CommonSelectParts();
};
