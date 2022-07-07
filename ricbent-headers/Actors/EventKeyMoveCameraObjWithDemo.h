#pragma once

class EventKeyMoveCameraObjWithDemo
{
public:
    EventKeyMoveCameraObjWithDemo(char const*);
    init(al::ActorInitInfo const&);
    control();
    kill();
};
