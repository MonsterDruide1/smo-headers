#pragma once

class EventKeyMoveCameraObjNoDemo
{
public:
    EventKeyMoveCameraObjNoDemo(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    kill();
    control();
};
