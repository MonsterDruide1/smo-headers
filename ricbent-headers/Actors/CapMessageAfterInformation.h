#pragma once

class CapMessageAfterInformation
{
public:
    CapMessageAfterInformation(char const*);
    makeActorDead();
    init(al::ActorInitInfo const&);
    exeWait();
    isEnable() const;
    exeShow();
    endShow();
};
