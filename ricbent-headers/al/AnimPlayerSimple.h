#pragma once

namespace al { 

class AnimPlayerSimple
{
public:
    AnimPlayerSimple();
    startAnim(char const*);
    update();
    clearAnim();
    getAnimFrame() const;
    setAnimFrame(float);
    getAnimFrameMax() const;
    getAnimFrameMax(char const*) const;
    getAnimFrameRate() const;
    setAnimFrameRate(float);
    isAnimExist(char const*) const;
    isAnimEnd() const;
    isAnimOneTime() const;
    isAnimOneTime(char const*) const;
    isAnimPlaying() const;
    getPlayingAnimName() const;
    calcNeedUpdateAnimNext();
    applyTo();
};

} 
