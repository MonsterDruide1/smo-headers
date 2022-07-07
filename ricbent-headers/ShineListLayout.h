#pragma once

class ShineListLayout
{
public:
    ShineListLayout(al::LayoutInitInfo const&);
    updateWorldInfo();
    appear();
    getSelectedWorldId() const;
    control();
    getWorldShineNum(al::LayoutActor const*, int) const;
    setSelectedWorld(int);
    isClosing() const;
    isEnableInput() const;
    isCompleteShine() const;
    isCompleteCollectCoin() const;
    calcCursorPos(sead::Vector2<float>*) const;
    isEnableChangePage() const;
    exeAppear();
    appearPosLayout();
    exeList();
    updatePosLayout(bool);
    exeWorldRoll();
    exeDeactive();
    exeEnd();
    endPosLayout();
    exeChangeOut();
    exeChangeIn();
    deactivate();
    upTrigger();
    up();
    down();
    downTrigger();
    right();
    rightTrigger();
    left();
    leftTrigger();
    decide();
    cancel();
    pageUpTrigger();
    pageDownTrigger();
    changeOut(bool);
    changeIn(bool);
    jumpAchievement();
    calcTransOnMap(sead::Vector2<float>*, sead::Vector3<float> const&, sead::Matrix44<float> const&);
};
