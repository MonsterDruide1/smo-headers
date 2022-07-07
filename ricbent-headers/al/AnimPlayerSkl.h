#pragma once

namespace al { 

class AnimPlayerSkl
{
public:
    tryCreate(al::AnimPlayerInitInfo const*, int);
    updateLast();
    startSklAnim(char const*, char const*, char const*, char const*, char const*, char const*, char const*);
    clearSklAnimBlend();
    setSklAnim(char const*, int);
    calcSklAnim();
    initInterp(char const*);
    setSklAnimBlendWeight(int, float);
    getSklAnimBlendWeight(int) const;
    getSklAnimBlendNum() const;
    getSklAnimFrame(int) const;
    getAnimObj(int) const;
    setSklAnimFrame(int, float);
    getAnimObj(int);
    getSklAnimFrameMax(int) const;
    getSklAnimFrameMax(char const*) const;
    getSklAnimFrameRate(int) const;
    setSklAnimFrameRate(int, float);
    isSklAnimExist(char const*) const;
    isSklAnimEnd(int) const;
    isSklAnimOneTime(int) const;
    isSklAnimOneTime(char const*) const;
    isSklAnimPlaying(int) const;
    getPlayingSklAnimName(int) const;
    update();
    reset();
    calcNeedUpdateAnimNext();
    prepareAnimInterpDirect(int);
    initPartialAnim(int, int, int);
    getPartialAnimSlotNum() const;
    getJoitsAmountFromJoint(char const*) const;
    addPartialAnimJoint(int, char const*, char const*);
    addPartialAnimJointRecursive(int, char const*);
    startPartialAnim(char const*, int, int, al::SklAnimRetargettingInfo const*);
    clearPartialAnim(int);
    getPartialAnimInfo(int);
    isPartialAnimEnd(int) const;
    getPartialAnimObj(int) const;
    isPartialAnimOneTime(int) const;
    isPartialAnimAttached(int) const;
    getPartialAnimInfo(int) const;
    getPlayingPartialSklAnimName(int) const;
    getPartialAnimFrame(int) const;
    setPartialAnimFrame(int, float);
    getPartialAnimObj(int);
    getPartialAnimFrameRate(int) const;
    setPartialAnimFrameRate(int, float);
    AnimPlayerSkl(al::AnimPlayerInitInfo const*, int);
};

} 
