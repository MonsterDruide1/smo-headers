#pragma once

namespace eui { 

class AnimatorSet
{
public:
    AnimatorSet();
    AnimatorSet(eui::AnimatorSet const&, eui::LayoutEx*, sead::Heap*);
    allocBuffer(unsigned int, sead::Heap*);
    ~AnimatorSet();
    setBuffer(unsigned int, eui::Animator**);
    setAnimator(unsigned int, eui::Animator*);
    select(sead::SafeStringBase<char> const&);
    select(unsigned int);
    findSelectedIndex() const;
    SetSkipFirstFrameAll(bool);
    SetSoundLinkAll(bool);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
