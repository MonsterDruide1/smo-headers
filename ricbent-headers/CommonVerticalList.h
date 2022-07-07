#pragma once

class CommonVerticalList
{
public:
    CommonVerticalList(al::LayoutActor*, al::LayoutInitInfo const&, bool);
    initData(int);
    initDataNoResetSelected(int);
    initDataWithIdx(int, int, int);
    hideAll();
    updateCursorPos();
    addStringData(sead::WFixedSafeString<512> const*, char const*);
    setEnableData(bool const*);
    addGroupAnimData(sead::FixedSafeString<64> const*, char const*);
    setImageData(nn::ui2d::TextureInfo**, char const*);
    setSelectedIdx(int, int);
    setRollPartsData(RollPartsData*);
    setRollPartsSelected(int, int);
    getRollPartsSelected(int);
    getSelectedParts() const;
    getParts(int) const;
    getListPartsNum() const;
    startLoopActionAll(char const*, char const*);
    calcCursorPos(sead::Vector2<float>*) const;
    isActive() const;
    isDeactive() const;
    isDecideEnd() const;
    isRejectEnd() const;
    update();
    up();
    down();
    decide();
    updateParts();
    reject();
    deactivate();
    activate();
    jumpTop();
    jumpBottom();
    pageUp();
    pageDown();
    rollRight();
    rollLeft();
    exeActive();
    exeDeactive();
    exeDecide();
    exeDecideEnd();
    exeReject();
    exeRejectEnd();
    calcAnimRate();
    appearCursor();
    hideCursor();
    endCursor();
    ~CommonVerticalList();
};
