#pragma once

class TalkNpcFreeze
{
public:
    TalkNpcFreeze(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    movement();
    calcAnim();
};
