#pragma once

class CommonHorizontalList
{
public:
    CommonHorizontalList(al::LayoutActor*, al::LayoutInitInfo const&, bool);
    initData(int);
    initDataNoResetSelected(int);
    initDataWithIdx(int, int, int);
    addStringData(sead::WFixedSafeString<256> const*, char const*);
    setGroupAnimData(sead::FixedSafeString<64> const*, char const*);
    setImageData(nn::ui2d::TextureInfo**, char const*);
    setSelectedIdx(int);
    setEnableData(bool const*);
    calcCursorPos(sead::Vector2<float>*) const;
    isActive() const;
    isDeactive() const;
    isDecideEnd() const;
    isRejectEnd() const;
    update();
    right();
    left();
    pageUp();
    pageDown();
    jumpLeft();
    jumpRight();
    decide(char const*);
    updateParts();
    reject();
    deactivate();
    activate();
    exeActive();
    exeDeactive();
    exeDecide();
    exeDecideEnd();
    exeReject();
    exeRejectEnd();
    updateCursorPos();
    ~CommonHorizontalList();
};
