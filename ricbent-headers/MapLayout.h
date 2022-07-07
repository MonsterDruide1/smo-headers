#pragma once

class MapLayout
{
public:
    MapLayout(al::LayoutInitInfo const&, al::PlayerHolder const*, int);
    changePrintWorld(int);
    loadTexture();
    reset();
    appear();
    moveFocusLayout(sead::Vector3<float> const&, sead::Vector2<float> const&);
    updateST();
    addAmiiboHint();
    appearAmiiboHint();
    end();
    updatePlayerPosLayout();
    appearWithHint();
    appearMoonRockDemo(int);
    appearCollectionList();
    isEnd() const;
    isEnableCheckpointWarp() const;
    changeOut(bool);
    changeIn(bool);
    control();
    updateLine(al::LayoutActor*);
    exeAppear();
    appearParts(bool);
    startNumberAction();
    exeWait();
    exeHintInitWait();
    exeHintAppear();
    calcSeaOfTreeIconPos(sead::Vector3<float>*);
    setLocalTransAndAppear(MapIconLayout*, MapIconInfo*, sead::Vector3<float> const&, IconType, bool);
    calcMapTransAndAppear(MapIconLayout*, MapIconInfo*, sead::Vector3<float> const&, IconType, bool);
    exeHintDecideIconAppear();
    exeHintDecideIconWait();
    exeHintPressDecide();
    exeEnd();
    exeChangeOut();
    scroll(sead::Vector2<float> const&);
    addSize(sead::Vector2<float> const&);
    isAppear() const;
    getViewProjMtx() const;
    getProjMtx() const;
    updateIconLine(al::LayoutActor*, sead::Vector3<float> const&, sead::Vector2<float> const&);
    focusIcon(MapIconInfo const*);
    lostFocusIcon(MapIconLayout*);
    tryCalcNorthDir(sead::Vector3<float>*);
    getSceneObjName() const;
    ~MapLayout();
};
