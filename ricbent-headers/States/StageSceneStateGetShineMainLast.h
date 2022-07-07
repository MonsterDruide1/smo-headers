#pragma once

class StageSceneStateGetShineMainLast
{
public:
    StageSceneStateGetShineMainLast(char const*, al::Scene*, al::LiveActor*, al::CameraTicket*);
    appear();
    kill();
    exeWait();
    ~StageSceneStateGetShineMainLast();
};
