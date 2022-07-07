#pragma once

class MenuSelectParts
{
public:
    MenuSelectParts(char const*, al::LayoutActor*, al::LiveActor*, al::LayoutInitInfo const&, int);
    update();
    appear(int);
    startActionPartsIllustSelectIndex();
    appearWait();
    setSelectMessage(int, char16_t const*);
    isDecideContinue() const;
    isDecideEnd() const;
    isSelectContinue() const;
    isDecideSetting() const;
    isSelectSetting() const;
    isDecideSave() const;
    isSelectSave() const;
    isDecideSeparatePlay() const;
    isSelectSeparatePlay() const;
    isDecideHelp() const;
    isSelectHelp() const;
    isDecideNewGame() const;
    isSelectNewGame() const;
    calcPartsIndex(int) const;
    exeHide();
    exeAppear();
    startActionMarioSelectIndex();
    exeSelect();
    startActionMario(al::LiveActor*, char const*);
    exeDecideParts();
    isInvalidSelect() const;
    exeDecideInterval();
    exeDecideEnd();
    ~MenuSelectParts();
};
