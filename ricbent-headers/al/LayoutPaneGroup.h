#pragma once

namespace al { 

class LayoutPaneGroup
{
public:
    LayoutPaneGroup(char const*);
    startAnim(char const*);
    getAnimator(char const*) const;
    setAnimFrame(float);
    setAnimFrameRate(float);
    getAnimFrame() const;
    getAnimFrameMax() const;
    getAnimFrameMax(char const*) const;
    getAnimFrameRate() const;
    isAnimExist(char const*) const;
    tryGetAnimator(char const*) const;
    isAnimEnd() const;
    isAnimOneTime() const;
    isAnimOneTime(char const*) const;
    isAnimPlaying() const;
    getPlayingAnimName() const;
    pushAnimName(char const*);
    createAnimator(nn::ui2d::Layout*);
    animate(bool);
};

} 
