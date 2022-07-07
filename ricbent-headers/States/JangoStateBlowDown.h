#pragma once

class JangoStateBlowDown
{
public:
    JangoStateBlowDown(al::LiveActor*, al::ActorInitInfo const&);
    appear();
    exeMove();
    isCapRelease() const;
    exeWaitEnd();
    ~JangoStateBlowDown();
};
