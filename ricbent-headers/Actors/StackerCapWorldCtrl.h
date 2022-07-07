#pragma once

class StackerCapWorldCtrl
{
public:
    StackerCapWorldCtrl(char const*);
    init(al::ActorInitInfo const&);
    appear();
    exeBattle();
    exeDemoCamera();
    exeObjAppear();
};
