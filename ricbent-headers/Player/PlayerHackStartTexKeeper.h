#pragma once

class PlayerHackStartTexKeeper
{
public:
    PlayerHackStartTexKeeper();
    ~PlayerHackStartTexKeeper();
    clearHackStartTextureOnlyFirstTime(agl::DrawContext*);
    activateHackStartTexture(agl::DrawContext*, agl::SamplerLocation const&) const;
    getSceneObjName() const;
};
