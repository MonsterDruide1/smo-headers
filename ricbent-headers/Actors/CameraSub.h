#pragma once

class CameraSub
{
public:
    CameraSub(char const*);
    init(al::ActorInitInfo const&);
    onAppear();
    initAfterPlacement();
    exeWait();
    exeActive();
};
