#pragma once

class JangoStateWaitTree
{
public:
    JangoStateWaitTree(al::LiveActor*, al::ActorInitInfo const&, JangoWaitTreeType);
    init();
    appear();
    control();
    isEndDemo() const;
    isEndFind() const;
    exeWaitOnSwitch();
    exeWaitPlayerOnGround();
    exeEnd();
    ~JangoStateWaitTree();
};
