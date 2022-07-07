#pragma once

class RandomWaitActionUpdater
{
public:
    RandomWaitActionUpdater(al::LiveActor*, al::ActorInitInfo const&, TalkNpcParam const*, char const*, char const*);
    setDisableBalloonAction();
    setRandomOutbreakProbability(float);
    update();
};
