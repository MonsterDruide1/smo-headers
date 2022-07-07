#pragma once

namespace al { 

class ActorActionKeeper
{
public:
    tryCreate(al::LiveActor*, al::ActorResource const*, char const*, char const*);
    startAction(char const*);
    tryStartActionNoAnim(char const*);
    updatePrev();
    updatePost();
    ActorActionKeeper(al::LiveActor*, char const*, al::ActionAnimCtrl*, al::NerveActionCtrl*, al::ActionFlagCtrl*, al::ActionEffectCtrl*, al::ActionSeCtrl*, al::ActionBgmCtrl*, al::ActionPadAndCameraCtrl*, al::ActionScreenEffectCtrl*);
    init();
};

} 
