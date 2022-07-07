#pragma once

class PaintObj
{
public:
    PaintObj(char const*);
    ~PaintObj();
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    switchOn();
    switchOff();
    reset();
    switchKill();
    switchStop();
    control();
    checkPaintAlpha(sead::Vector2<int> const&) const;
    onClipped();
    requestDrawPlot(PaintObj::DrawRequest const*) const;
    requestDrawTexture(PaintObj::DrawRequest const*) const;
    draw() const;
    drawNrm(agl::TextureData*, agl::TextureData*, int, int, int, int) const;
    drawBlurAndNormal() const;
    drawLabelingAndVanish(sead::Vector2<int> const&, sead::Vector2<int> const&, agl::DrawContext*, sead::Vector2<int> const&, sead::Vector2<int> const&) const;
    calcCoord(sead::Vector2<int>*, sead::Vector3<float> const&, sead::Vector2<int> const&) const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    appendNrmDrawRequest(sead::Vector2<int> const&, int, al::HitSensor*);
    checkPaintClear(sead::Vector3<float> const&, sead::Color4u8 const&, int) const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    medianFilter(agl::TextureData*, sead::Vector2<int> const&, sead::Vector2<int> const&);
    exeWait();
};
