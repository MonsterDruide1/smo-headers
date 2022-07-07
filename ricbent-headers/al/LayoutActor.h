#pragma once

namespace al { 

class LayoutActor
{
public:
    getNerveKeeper() const;
    getName() const;
    getEffectKeeper() const;
    getAudioKeeper() const;
    getLayoutActionKeeper() const;
    getLayoutKeeper() const;
    control();
    LayoutActor(char const*);
    appear();
    kill();
    movement();
    syncAction();
    calcAnim(bool);
    initLayoutKeeper(al::LayoutKeeper*);
    initActionKeeper();
    initTextPaneAnimator(al::LayoutTextPaneAnimator*);
    initExecuteInfo(al::LayoutExecuteInfo*);
    initHitReactionKeeper(al::HitReactionKeeper*);
    initSceneInfo(al::LayoutSceneInfo*);
    initLayoutPartsActorKeeper(int);
    initEffectKeeper(al::EffectKeeper*);
    initAudioKeeper(al::AudioKeeper*);
    initNerve(al::Nerve const*, int);
    setMainGroupName(char const*);
    getCameraDirector() const;
    getSceneObjHolder() const;
    getMessageSystem() const;
};

} 
