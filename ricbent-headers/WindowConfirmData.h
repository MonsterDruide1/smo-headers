#pragma once

class WindowConfirmData
{
public:
    WindowConfirmData(al::LayoutInitInfo const&, char const*, char const*, bool);
    setConfirmMessage(char16_t const*, char16_t const*, char16_t const*);
    setConfirmData(al::LayoutActor*, nn::ui2d::TextureInfo*);
    updateConfirmDataDate();
    appear();
    appearWithChoicingCancel();
    end();
    kill();
    isEndSelect();
    isDecided();
    isCanceled();
    isDisable();
    exeAppear();
    changeSelectingIdx(int);
    exeWait();
    updateCursorPos();
    exeSelect();
    exeVanish();
    exeDisable();
    ~WindowConfirmData();
};
