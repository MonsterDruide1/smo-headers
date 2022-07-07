#pragma once

class EventActorStateGiveShine
{
public:
    EventActorStateGiveShine(al::LiveActor*);
    start(Shine*, sead::Vector3<float> const&, char const*);
    exeStart();
    exeWait();
    ~EventActorStateGiveShine();
};
